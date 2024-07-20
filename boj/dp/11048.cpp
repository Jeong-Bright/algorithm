#include <iostream>
#include <vector>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
using namespace std;
int arr[1005][1005];
int dp[1005][1005];

int main() {
    int N,M,mx = 0; cin >> N >> M;

    for(int i = 1 ; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> arr[i][j];


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = max(
                    {
                            dp[i-1][j] + dp[i][j],
                            dp[i-1][j-1] + dp[i][j],
                            dp[i][j-1] + dp[i][j]
                    }
                    );
            dp[i][j] += arr[i][j];
        }
        cout << endl;
    }
    cout << dp[N][M];
}