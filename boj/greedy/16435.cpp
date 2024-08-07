#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define INF 100000005
int arr[1005];

int main() {
    int N,L; cin >> N >> L;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N; i++) {
        if(arr[i] <= L) {
            L++;
        }
    }

    cout << L;

}