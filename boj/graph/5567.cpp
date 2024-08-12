#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
vector<int> vec[505];
bool vis[505];
int cnt = 0;

void bfs() {
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        auto ptr = q.front();
        q.pop();
        vis[ptr] = true;
        for (auto nxt: vec[ptr]) {
            if(vis[nxt]) continue;
            vis[nxt] = true;
            cnt++;
            if(ptr == 1) q.push(nxt);
        }
    }

}



int main() {

    int v,e; cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int p,q; cin >> p >> q;
        vec[p].push_back(q);
        vec[q].push_back(p);
    }

    bfs();
    cout << cnt;

}