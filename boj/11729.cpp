#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define ll long long

void hanoi(int x, int y, int N) {

    if(N == 1) {
        cout << x << ' ' << y << endl;
        return;
    }
    hanoi(x, 6 - x - y, N-1);
    cout << x << ' ' << y << endl;
    hanoi(6 - x - y, y, N - 1);

}


int main() {
    io;
    int N; cin >> N;
    cout << (1<<N) - 1 << endl;
    hanoi(1, 3, N);
}