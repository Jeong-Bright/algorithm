#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[2250010];

int main() {
    io;

    int N; cin >> N;
    for (int i = 1; i <= N*N; i++) {
        cin >> arr[i];
    }

    sort(arr+1, arr+(N*N) + 1);



    cout << arr[(N * N)-(N - 1)];


}