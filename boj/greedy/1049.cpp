#include <iostream>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define INF 100000005
int stSet[55];
int stSingle[55];

int main() {

    int N, M, mnSet=INF, mnSingle = INF, res = 0; cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> stSet[i] >> stSingle[i];
        mnSet = min(mnSet, stSet[i]);
        mnSingle = min(mnSingle, stSingle[i]);
    }


    res = min({
        N * mnSingle,
        (N/6 + 1) * mnSet,
        (N/6) * mnSet + (N%6) * mnSingle
    });

    cout << res;

}