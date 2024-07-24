#include <iostream>
#include <string>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int dp[5005];

int main() {
    int N, a=0,b=0; cin >> N;
    fill(dp, dp + 5005, 5006);
    dp[3] = 1;
    dp[5] = 1;
    for (int i = 6; i <= N; i++) {
        dp[i] = min(dp[i-3] + 1, dp[i-5] + 1);
    }
    if(dp[N] >= 5006)
    cout << -1;
    else cout << dp[N];
}