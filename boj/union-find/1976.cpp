#include <iostream>
#include <algorithm>

using namespace std;

int parent[201];

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

int main() {

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int x; cin >> x;
            if(i == j) continue;
            if(x == 1) {
                merge(i, j);
            }
        }
    }



}