#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[1005];

int main() {
    int N , sum=0; cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    for(int i = 1 ; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            sum += arr[j];
        }
    }
    cout << sum;
}