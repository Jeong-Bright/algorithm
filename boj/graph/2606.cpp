#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
vector<int> vec[105];
bool vis[105];

int bfs(int pt) {
    int cnt = 0;
    queue<int> q;
    q.push(pt);
    vis[pt] = true;
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (auto nxt: vec[cur]) {
            if (vis[nxt]) continue;
            q.push(nxt);
            cnt++;
            vis[nxt] = true;
        }
    }
    return cnt;
}

int main() {
    int v,e; cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int p,q; cin >> p >> q;
        vec[p].push_back(q);
        vec[q].push_back(p);
    }
    cout << bfs(1);
}