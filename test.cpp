#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> adj[10];
int p[10];
int lc[9] = {0,2,4,6,0,0,0,0,0};
int rc[9] = {0,3,5,7,0,8,0,0,0};

/*void bfs(int root){
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for (int nxt: adj[cur]) {
            if(p[cur] == nxt) continue;
            q.push(nxt);
            p[nxt] = cur;
        }
    }
}

void dfs(int cur) {
    cout << cur << ' ';
    for (int nxt: adj[cur]) {
//        p[nxt] = cur;
        dfs(nxt);
    }
}*/

void bfs() {
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        cout << cur << ' ';
        if(lc[cur]) q.push(lc[cur]);
        if(rc[cur]) q.push(rc[cur]);

    }
}

void preorder(int cur) {
    cout << cur << ' ';
    if(lc[cur] != 0) preorder(lc[cur]);
    if(rc[cur] != 0) preorder(rc[cur]);

}

void inorder(int cur) {
    if(lc[cur] != 0) inorder(lc[cur]);
    cout << cur << ' ';
    if(rc[cur] != 0) inorder(rc[cur]);

}
void postorder(int cur) {
    if(lc[cur] != 0) postorder(lc[cur]);
    if(rc[cur] != 0) postorder(rc[cur]);
    cout << cur << ' ';
}
int main() {

/*
    for (int i = 2; i <= 8; i++) {
        adj[1].push_back(i);
    }
*/

    postorder(1);
}