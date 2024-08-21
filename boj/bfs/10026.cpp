#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define x first
#define y second
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char weak_board[105][105];
char board[105][105];
bool chk[105][105];
int N;

int weakness_bfs() {
    int area = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(chk[i][j]) continue;
            area++;
            queue<pair<int, int>> q;
            q.emplace(i, j);
            chk[i][j] = true;
            while(!q.empty()) {
                auto cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + cur.x;
                    int ny = dy[dir] + cur.y;
                    if(nx >= N || nx < 0 || ny >= N || ny < 0) continue;
                    if(chk[nx][ny] || weak_board[nx][ny] != weak_board[i][j]) continue;
                    chk[nx][ny] = true;
                    q.emplace(nx, ny);
                }
            }
        }
    }
    return area;
}

int bfs() {
    int area = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(chk[i][j]) continue;
            area++;
            queue<pair<int, int>> q;
            q.emplace(i, j);
            chk[i][j] = true;
            while(!q.empty()) {
                auto cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + cur.x;
                    int ny = dy[dir] + cur.y;
                    if(nx >= N || nx < 0 || ny >= N || ny < 0) continue;
                    if(chk[nx][ny] || board[nx][ny] != board[i][j]) continue;
                    chk[nx][ny] = true;
                    q.emplace(nx, ny);
                }
            }
        }
    }
    return area;
}

int main () {
    ios::sync_with_stdio(true); cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for(int j = 0 ; j < N; j++) {
            cin >> board[i][j];
            weak_board[i][j] = board[i][j];
            if (weak_board[i][j] == 'R') weak_board[i][j] = 'G';
        }
    }

    cout << bfs() << ' ';
    memset(chk, 0, sizeof(chk));
    cout << weakness_bfs();
}