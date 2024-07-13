#include <iostream>
#include <algorithm>
#define endl '\n'
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
ll arr[10005];

int main() {
    io;
    int N, M;;
    cin >> N >> M;

    ll st = 1, en = (1<<31) - 1;

    for (int i = 0; i < N; i++) cin >> arr[i];

    while(st < en) {
        ll cnt = 0;
        ll mid = (st+en+1) / 2;

        for (int i = 0; i < N; i++) {
            cnt += arr[i] / mid;
        }

        if(cnt >= M) {
            st = mid;
        }
        else en = mid - 1;
    }

    cout << st;

}