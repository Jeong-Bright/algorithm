#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int dp[1005][3];
int r[1005], g[1005], b[1005];

int main() {

    io;
    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> r[i] >> g[i] >> b[i];
        dp[1][0] = r[1];
        dp[1][1] = g[1];
        dp[1][2] = b[1];
    }

    for (int i = 2; i <= N; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + r[i];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + g[i];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + b[i];
    }

    cout << min({dp[N][0], dp[N][1], dp[N][2]});

}