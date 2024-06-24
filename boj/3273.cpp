#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
long arr[3000005];
long cmp[3000005];
int main() {
    io;

    long size, nums, res, cnt = 0;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> nums;
        cmp[i] = nums;
    }
    cin >> res;
        for (int i = 0; i < size; i++) {
            if (res - cmp[i] > 0 && arr[res - cmp[i]] == 1) {
                cnt++;
            }
            arr[cmp[i]]++;
        }
    cout << cnt;
}
