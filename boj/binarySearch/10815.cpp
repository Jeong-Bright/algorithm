#include <iostream>
#include <algorithm>

using namespace std;

int card[500005];
int N;
bool binarySearch(int bs) {

    int st = 0, en = N-1;

    while(st <= en) {
        int mid = (st+en) / 2;

        if(bs == card[mid]) {
            return true;
        }

        else if(bs > card[mid]) {
            st = mid + 1;
        }

        else {
            en = mid - 1;
        }
    }
    return false;
}


int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> card[i];
    }
    sort(card, card + N);
    int M; cin >> M;
    while(M--) {
        int bs; cin >> bs;
        cout << binarySearch(bs) << ' ';
    }

}