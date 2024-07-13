#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[100005];
int N;

int func(int x){
    int st = 0, en = N-1;
    while (st <= en) {
        int mid = (st + en) / 2;

        if (arr[mid] < x) {
            st = mid + 1;
        } else if (arr[mid] > x) {
            en = mid - 1;
        }
        else {return 1;}
    }
    return 0;
}


int main() {
    io;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    int M; cin >> M;
    sort(arr, arr + N);

    while(M--) {
        int x;
        cin >> x;
        cout << func(x) << endl;
    }


}