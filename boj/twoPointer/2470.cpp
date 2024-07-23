#include <iostream>
#include <cmath>
#include <algorithm>
#define endl '\n'
#define ll long long
#define INX 2000000001
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[100005];

int main() {

    int N;
    cin >> N;
    int st = 0, en = N-1;
    ll chkMx = 0, chkMn = 0, mn = INX;
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr + N);

    while (st < en) {

        int temp = abs(arr[en] + arr[st]);

        if(temp < mn) {
            mn = temp;
            chkMx = arr[en];
            chkMn = arr[st];
        }

        if(arr[st] + arr[en] < 0) {
            st++;
        }
        else en--;

    }

    cout << chkMn << ' ' << chkMx;
}