#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> gp[105];
bool vis[105];
int cnt = 0, mn = 10000, kevinBacon = 0;

void bfs() {
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        auto x = q.front();
        q.pop();
        vis[x] = true;
        for (auto nxt: gp[x]) {
            if(vis[nxt]) continue;
            vis[nxt] = true;
            cnt++;
            q.push(nxt);
        }
        if(cnt < mn) {
            mn = cnt;
            kevinBacon = x;
        }
    }
}


int main() {
    ios::sync_with_stdio(true);cin.tie(nullptr);

    int N, M; cin >> N >> M;

    while(M--) {
        int A,B; cin >> A >> B;
        gp[A].push_back(B);
        gp[B].push_back(A);
    }
    bfs();
    cout << kevinBacon;
}
