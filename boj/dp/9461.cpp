#include <iostream>
#include <vector>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
using namespace std;
vector<int> vec;
ll dp[105];
ll arr[105];

int main() {

    int N; cin >> N;
    dp[1] = 1, dp[2] = 1, dp[3] = 1, dp[4] = 2, dp[5] = 2;
    while(N--) {
        int temp; cin >> temp;
        for (int i = 6; i <= temp; i++) {
            dp[i] = dp[i - 1] + dp[i - 5];
        }
        cout << dp[temp] << endl;
    }



}