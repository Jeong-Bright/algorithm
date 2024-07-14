#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[10005];

int main() {

    int N,K; cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);


}

/**
*
 * N개의 센서
 * K개의 집중국
 *
 * 1 3 6 6 7 9
 * 3 6 7 8 10 12 14 15 18 20
*/