#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int board[55][55];
bool chk[55][55];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int M,N,K;

int bfs() {
    int cnt = 0;

    for(int i = 0 ; i < N; i++) {
        for(int j = 0 ; j < M; j++) {
            if(chk[i][j] || board[i][j] != 1) continue;
            cnt++;
            queue<pair<int,int>> q;
            q.emplace(i, j);
            chk[i][j] = true;
            while(!q.empty()) {
                auto ptr = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = dx[dir] + ptr.first;
                    int ny = dy[dir] + ptr.second;
                    if(nx >= N || nx < 0 || ny >= M || ny < 0) continue;
                    if(chk[nx][ny] || board[nx][ny] != 1) continue;
                    chk[nx][ny] = true;
                    q.emplace(nx, ny);
                }
            }
        }

    }
    return cnt;
}


int main() {

    int T; cin >> T;

    while(T--) {
         cin >> N >> M >> K;

        for (int i = 0; i < K; i++) {
            int x,y; cin >> x >> y;
            board[x][y] = 1;
        }

        cout << bfs() << endl;

        memset(board, 0, sizeof(board));
        memset(chk, 0, sizeof(chk));
    }

}