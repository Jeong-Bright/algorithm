#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

using namespace std;

int N, M;
int parent[1000005];

int Find(int now) {
    if (now == parent[now])
        return now;

    return parent[now] = Find(parent[now]);
}

void merge(int A, int B) {

    int root_A = Find(A);
    int root_B = Find(B);

    if (root_A != root_B) {
        parent[root_B] = root_A;
    }

    return;
}

string isUnion(int x, int y) {
    x = Find(x);
    y = Find(y);
    if(x == y) return "YES";
    return "NO";
}

int main() {
    io;

    cin >> N >> M;

    for (int i = 0; i <= N; i++) {
        parent[i] = i;
    }


    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0) {
            merge(b, c);
        }
        else if(a == 1) {
            cout << isUnion(b, c) << endl;
        }
    }
}