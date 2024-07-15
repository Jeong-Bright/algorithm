#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define ll long long
vector<int> adj[100005];
int p[100005];

void dfs(int cur) {
    for (int nxt: adj[cur]) {
        if(p[cur] == nxt) continue;
        p[nxt] = cur;
        dfs(nxt);
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N-1; i++) {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    for (int i = 2; i <= N; i++) {
        cout << p[i] << endl;
    }
}