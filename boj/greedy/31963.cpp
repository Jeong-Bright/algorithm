#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[250005];

int main() {
    io;
    int N, cnt = 0,mul = 0; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    for (int i = 1; i < N; i++) {
        if(arr[i-1] > arr[i]) {
            int minus = arr[i - 1] - arr[i];
            int div = (arr[i-1] % 2 == 0) ? (arr[i-1] / 2) : arr[i-1] / 2 + 1;

            if((2*minus) * arr[i] >= arr[i-1] && (2*div) * arr[i] >= arr[i-1]) {
                cnt += min(div, minus);
                mul = min(div, minus);
                arr[i] *= 2*mul;
            }
            else if((2*minus) * arr[i] >= arr[i-1]) {
                cnt += minus;
                arr[i] *= 2*minus;
            }
            else {
                cnt += div;
                arr[i] *= 2*div;
            }
        }
        cout << arr[i-1] << ' ' << arr[i] << endl;
    }

    cout << cnt;

}