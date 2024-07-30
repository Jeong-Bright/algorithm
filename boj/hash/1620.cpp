#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
unordered_map<string,int> um;
string pocketMon[100005];

int main() {
    io;
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> pocketMon[i];
        um[pocketMon[i]] = i;
    }
    while(M--) {
        string chk; cin >> chk;

        if (isdigit(chk[0])) {
            cout << pocketMon[stoi(chk)] << endl;
        }
        else {
            cout << um[chk] << endl;
        }
    }
}