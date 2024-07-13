#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
vector<int> vec[1005];
bool chk[1005];
bool chkDfs[1005];
int N,M;

void bfs(int pt) {
    queue<int> q;
    q.push(pt);
    chk[pt] = true;
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        cout << cur << ' ';
        for (auto nxt: vec[cur]) {
            if (chk[nxt]) continue;
            q.push(nxt);
            chk[nxt] = true;
        }
    }
}

void dfs(int cur) {
    int res;
    chkDfs[cur] = true;
    cout << cur << ' ';
    for (auto nxt: vec[cur]) {
        if(chkDfs[nxt]) continue;
        dfs(nxt);
    }
}

int main() {
    int V;
    cin >> N >> M >> V;

    while (M--) {
        int u,w;
        cin >> u >> w;
        vec[u].push_back(w);
        vec[w].push_back(u);
    }
    for (int i = 1; i <= N; i++)
        sort(vec[i].begin(), vec[i].end());

    dfs(V);
    cout << endl;
    bfs(V);

}