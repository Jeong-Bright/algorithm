#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
vector<int> vec[1005];
bool chk[1005];

int main() {
    int N,M,res=0; cin >> N >> M;

    for (int i = 1; i <= M; i++) {
        int u,v; cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for(int i = 1; i <= N; i++) {
        if(chk[i]) continue;
        res++;
        queue<int> q;
        q.push(i);
        chk[i] = true;
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            for (auto nxt: vec[cur]) {
                if(chk[nxt]) continue;
                q.push(nxt);
                chk[nxt] = true;
            }
        }
    }
    cout << res;
}