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
int arr[200005];

int main() {
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cout << arr[(N - 1) / 2];

}