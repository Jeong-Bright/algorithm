#include <iostream>

using namespace std;
int N, M;
int wood[1000005];


long long wood_cut(long long target) {

    long long st = 0, en = 1000000000;

    while(st < en) {
        long long mid = (st + en + 1) / 2 , cnt = 0;

        for(int i = 0 ; i < N; i++) {
            if(wood[i] - mid > 0) {
                cnt += wood[i] - mid;
            }
        }

        if(cnt >= target) {
            st = mid;
        }

        else en = mid - 1;
    }
    return st;
}

int main() {

    ios::sync_with_stdio(true); cin.tie(nullptr);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> wood[i];
    }

    cout << wood_cut(M);


}