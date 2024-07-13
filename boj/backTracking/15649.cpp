#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int N,M;
int arr[10];

bool issued[10];
void func(int x) {
    if(x == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!issued[i]) {
            arr[x] = i;
            issued[i] = true;
            func(x + 1);
            issued[i] = false;
        }
    }
}


int main() {
    io;
    cin >> N >> M;
    func(0);

}