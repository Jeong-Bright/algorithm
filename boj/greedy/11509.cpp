#include <iostream>

using namespace std;
int arr[1000005];
int N , cnt = 1;


int main() {
    ios::sync_with_stdio(true); cin.tie(nullptr);
    cin >> N;

    for(int i = 0 ; i < N; i++) {
        cin >> arr[i];
    }

    cout << cnt;
}