#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[100005];

int main() {
    ll N,M, res =0x7fffffff; cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    ll st = 0, en = 1;

    while (en < N) {
        if(st >= N) break;
        ll sum = 0;
        sum = abs(arr[en] - arr[st]);
        if(sum >= M) {
            st++;
            res = (res >= sum) ? sum : res;
        }
        else en++;
    }
    cout << res;

}