#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[305];
int dp[305][3] = {};

int main() {

    int x, res;
    cin >> x;

    for (int i = 1; i <=x; i++) {
        cin >> arr[i];
    }

    dp[1][1] = arr[1]; dp[1][2] = 0;
    dp[2][1] = arr[2];
    dp[2][2] = arr[1] + arr[2];

    for (int i = 3; i <= x; i++) {

        dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + arr[i];
        dp[i][2] = dp[i - 1][1] + arr[i];

    }

    res = max(dp[x][1], dp[x][2]);
    cout << res;


}