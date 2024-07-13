#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[500005];
int cmp[8005] = {};

int main(){

    int N; cin >> N;
    int max = 0, min = 4005, mid = 0, chk = 0, cnt = 0, cntcmp = 0;
    double sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
        if(++cmp[arr[i] + 4000] >= cnt) {
            cnt = cmp[arr[i] + 4000];
            chk = arr[i];
        }
    }

    double sumRes = sum / N;
    sort(arr, arr + N);
    max = arr[N - 1]; min = arr[0];

    for (int i = 0; i <= 8000; i++) {
        int x = i - 4000;
        if (cmp[i] == cnt) {
            ++cntcmp;
        }
        if (cntcmp == 2) {
            chk = x; break;
        }
    }

    max -= min; mid = arr[(N-1) / 2]; sum = round(sumRes);
    if(sum == -0) sum = 0;
    cout << sum << endl << mid << endl << chk << endl << max;


}