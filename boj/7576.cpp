#include <iostream>
#include <algorithm>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define X first
#define Y second
int board[1005][1005];
int dist[1005][1005];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main() {
    io;
    int M,N, res = 0; cin >> M >> N;
    queue<pair<int, int>> q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
            if(board[i][j] == 1) {
                q.emplace(i,j);
            }
            if(board[i][j] == 0) {
                dist[i][j] = -1;
            }
         }
    }
            while (!q.empty()) {
                auto cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if (dist[nx][ny] >= 0) continue;
                    dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                    q.emplace(nx,ny);
                }
            }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if(dist[i][j] == -1) {
                    cout << -1;
                    return 0;
                }
                res = (res >= dist[i][j]) ? res : dist[i][j];
            }
        }

    cout << res;
}
