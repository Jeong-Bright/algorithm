#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> gp[105];
int dist[105];
bool vis[105];
int N, check = 0;

    void bfs(int A) {
            queue<int> q;
            q.push(A);
            while (!q.empty()) {
                auto ptr = q.front();
                q.pop();
                vis[ptr] = 1;
                for (auto nxt: gp[ptr]) {
                    if (vis[nxt]) continue;
                    q.push(nxt);
                    dist[nxt] = dist[ptr] + 1;
                    vis[nxt] = 1;
                }
            }
        }



int main() {
    ios::sync_with_stdio(true); cin.tie(nullptr);
    int x,y,M; cin >> N >> x >> y >> M;
    while(M--) {
        int R1, R2; cin >> R1 >> R2;
        gp[R1].push_back(R2);
        gp[R2].push_back(R1);
    }

    bfs(x);

    if(dist[y] == 0) {cout << -1; return 0;}
    else {cout << dist[y];}


}