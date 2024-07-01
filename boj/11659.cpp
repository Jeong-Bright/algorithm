#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int sum[100005];
int arr[100005];

int main() {
    io;
    int N,M; cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum[i] = arr[i] + sum[i-1];
    }

    while (M--) {
        int x,y,res = 0;
        cin >> x >> y;

        res = sum[y] - sum[x - 1];
        cout << res << endl;
    }

}