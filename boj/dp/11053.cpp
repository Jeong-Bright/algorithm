#include <iostream>
#include <vector>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int N;
int arr[1005];
int DP[1005];
int main() {
    io;
    cin >> N;
    int cnt, res = 1;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        DP[i] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            cout << arr[i] << ' ' << arr[j] << endl;
            if(arr[i] > arr[j]){
                DP[i] = max(DP[i], DP[j] + 1);
            }
        }
        res = max(res, DP[i]);
    }

    cout << res;
}