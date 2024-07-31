#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF 1000000005
using namespace std;
ll arr[100005];
ll arr2[100005];

int main() {
    ll N,res = 0, sum = 0, cmp = 0; cin >> N;
    for (int i = 0; i < N - 1; i++) cin >> arr2[i];


    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr2[i];
    }
    int idx = 0;
    sum *= arr[0];
    res += arr2[0] * arr[0];

    for (int i = 1; i < N-1; i++) {
        if(arr[idx] * arr2[i] < arr2[i] * arr[i]) {
            res += arr[idx] * arr2[i];
        }
        else {
            res += arr2[i] * arr[i];
            idx = i;
        }
    }

    res = min(res, sum);
    cout << res;

}