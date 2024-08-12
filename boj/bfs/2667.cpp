#include <iostream>
#include <algorithm>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define X first
#define Y second

using namespace std;
vector<int> cntVec;
int T, area = 0, cnt = 0;
string board[26];
bool chk[26][26];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs() {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (chk[i][j] || board[i][j] != '1') continue;
            area++;
            queue<pair<int, int>> q;
            q.push({ i,j });
            chk[i][j] = true;
            cnt = 0;
            while (!q.empty()) {
                cnt++;
                pair<int, int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + cur.first;
                    int ny = dy[dir] + cur.second;
                    if (nx >= T || nx < 0 || ny >= T || ny < 0) continue;
                    if (chk[nx][ny] || board[nx][ny] != '1') continue;
                    chk[nx][ny] = true;
                    q.push({ nx, ny });
                }
            }
            cntVec.push_back(cnt);
        }
    }
}

int main() {

    cin >> T;
    for (int i = 0; i < T; i++)
            cin >> board[i];

    bfs();
    cout << area << endl;
    sort(cntVec.begin(), cntVec.end());
    for(auto i : cntVec) cout << i << endl;

}