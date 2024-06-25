#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[1000005];
int main() {
    int N; cin >> N;

    arr[1] = 0;

    for (int i = 2; i <= N; i++) {
        arr[i] = arr[i-1] + 1;
        if (i % 2 == 0) {
            arr[i] = min(arr[i], arr[i/2] + 1);
        }
        if (i % 3 == 0) {
            arr[i] = min(arr[i], arr[i/3] + 1);
        }
    }
    cout << arr[N];


}