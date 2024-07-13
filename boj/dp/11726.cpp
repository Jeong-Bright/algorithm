#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
long dp[1005];

int main() {

    int N; cin >> N;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    long res = dp[N];
    cout << res;


}
