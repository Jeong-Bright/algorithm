#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int arr[100005];

int main() {

    io;
    int N,M,cnt = 1, res = (1<<31) - 1; cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> arr[i];

    int st = 0, en = 1;
    int cal = arr[st];

    while(st < N) {

        while (en < N && cal < M) {
            cal += arr[en++];
        }
        cnt = en - st;
        if (cal >= M){
            res = (res < cnt) ? res : cnt;
        }
        cal -= arr[st++];
    }

    if(res != (1<<31) -1)
    cout << res;
    else cout << 0;
}