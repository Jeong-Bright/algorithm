#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;
int board[100005];
bool vis[100005];

void bfs(int N, int K) {
    queue<int> q;
    q.push(N);
    while(board[K] == -1) {
        auto cur = q.front();
        q.pop();
        for(int nxt : {cur-1, cur+1, 2*cur}) {
            if(nxt < 0 || nxt > 100000) continue;
            if(board[nxt] != -1) continue;
            board[nxt] = board[cur] + 1;
            q.push(nxt);
        }
    }
}


int main() {
    int N, K; cin >> N >> K;
    fill(board, board + 100001, -1);
    board[N] = 0;
    bfs(N, K);

    cout << board[K];
}