#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
ll arr[10000005];

int main() {
    int N; cin >> N;

    while(N--) {
        ll temp, max = 0 ,sum = 0; cin >> temp;
        for (int i = 0; i < temp; i++) cin >> arr[i];
        max = arr [temp - 1];
        for (ll i = temp - 1; i > 0; i--) {
            if(max <= arr[i-1]) {
                max = arr[i - 1];
                continue;
            }
            else {
                sum += max - arr[i - 1];
            }
        }
        cout << sum << endl;
    }

}