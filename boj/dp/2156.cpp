#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
using namespace std;

int dp[10005];
int arr[10005];

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        dp[i] = max(max(dp[i - 3] + arr[i] + arr[i-1] , dp[i - 2] + arr[i]), dp[i-1]);
    }

    cout << dp[N-1];

}

