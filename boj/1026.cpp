#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[105];
int arr2[105];

int main() {
    int N, res = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> arr2[i];
    }
    sort(arr, arr + N);
    sort(arr2, arr2 + N, greater<int>());

    for (int i = 0; i < N; i++) {
        res += arr[i] * arr2[i];
    }
    cout << res;


}