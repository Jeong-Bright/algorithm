#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int N,M;
int arr[10];
bool issued[10];
void func(int q , int x) {
    if(x == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = q; i <= N; i++) {
            arr[x] = i;
            func(i, x + 1);
        }
    }



int main() {
    io;
    cin >> N >> M;
    func(1, 0);

}