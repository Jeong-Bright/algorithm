#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int arr[100005];
int dp[100005];
int main() {

    int N, mx = -1005; cin >> N;

    for (int i = 1; i <= N; i++) {cin >> arr[i];}

    for(int i = 1; i <= N; i++) {
        dp[i] = max({
            dp[i-1] + arr[i] ,
            arr[i-1] + arr[i],
            arr[i]}
            );
        mx = (mx < dp[i]) ? dp[i] : mx;
    }

    cout << mx;

}