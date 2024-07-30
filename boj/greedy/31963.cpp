#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[250005];

int main() {
    io;
    int N, cnt = 0; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    for (int i = 1; i < N; i++) {

        if (arr[i] < arr[i - 1]) {
            while(1) {
                if(arr[i] >= arr[i-1]) break;
                arr[i] *= 2;
                cnt++;
            }
        }
    }

    cout << cnt;

}