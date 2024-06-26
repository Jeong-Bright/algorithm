#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[12];

int main () {
    int N; cin >> N; int x;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    while(N--) {
        cin >> x;
        for (int i = 4; i <= x; i++) {
            arr[i] = arr[i - 3] + arr[i - 2] + arr[i-1];
        }
        cout << arr[x] << endl;
    }
}
