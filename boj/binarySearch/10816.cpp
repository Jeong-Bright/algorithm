#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[500005];

int lower_idx(int x, int N) {
    int st = 0, en = N;
    while (st < en) {
        int mid = (st+en) / 2;

        if(arr[mid] >= x) en = mid;
        else st = mid + 1;
    }
    return st;
}

int upper_idx(int x, int N) {
    int st = 0, en = N;
    while(st < en) {
        int mid = (st+en) / 2;
        if(arr[mid] > x) en = mid;
        else st = mid + 1;
    }
    return st;
}


int main() {

    io;
    int N; cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    int M; cin >> M;
    while (M--) {
        int x; cin >> x;
        cout << upper_bound(arr, arr+N, x) - lower_bound(arr, arr+N, x) << endl;
    }

}

/**
*
 *
 *
 * -10 -10 2 3 3 6 7 10 10 10
 *
*/