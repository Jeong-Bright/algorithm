#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> gp[20005];
bool vis[20005];
int depth[20005], mx = 0, mn = 1000000, cnt = 0;
void bfs() {
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        auto ptr = q.front(); q.pop();
        vis[ptr] = 1;
        for(auto nxt : gp[ptr]) {
            if(vis[nxt]) continue;
            vis[nxt] = true;
            q.push(nxt);
            depth[nxt] = depth[ptr] + 1;
        }
        mx = max(mx, depth[ptr]);
    }
}

int main() {
    ios::sync_with_stdio(true);cin.tie(nullptr);

    int N,M; cin >> N >> M;
    while(M--) {
        int A_i, B_i; cin >> A_i >> B_i;
        gp[A_i].push_back(B_i);
        gp[B_i].push_back(A_i);
    }

    bfs();

    for (int i = 1; i <= N; i++) {
        if(depth[i] == mx) {
            mn = min(mn, i); cnt++;
        }
    }
    cout << mn << ' ' << mx << ' ' << cnt;

}
// depth 구하기 , 공부하기 좋은 문제