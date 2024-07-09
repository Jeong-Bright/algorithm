#include <iostream>
#include <string>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int LCK[1005][1005];
string N,M;

int main() {
    io;
    cin >> N >> M;
    for (int i = 1; i <= N.length(); i++) {
        for (int j = 1; j <= M.length(); j++) {
            if(N[i-1] == M[j-1]) {
                LCK[i][j] = LCK[i-1][j-1] + 1;
            } else LCK[i][j] = max(LCK[i-1][j], LCK[i][j-1]);
        }
    }

    cout << LCK[N.length()][M.length()] << endl;

}