#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <random>
#include <cstdlib>
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

static bool cmp(tuple<int,int,int> &v1, tuple<int,int,int> &v2) {

    return get<2>(v1) < get<2>(v2);
}


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

    int arr[1000005] = {};
    int N = 10;

    /* for(int a = 0 ; a < N ; a++) {
         cout << endl;
         for (int b = 0; b < N; b++) {
             for (int c = 0; c < N; c++) {
                 for (int d = 0; d < N; d++) {
                     for (int e = 0; e < N; e++) {
                         for (int f = 0; f < N; f++) {
                             cout << a * 100000 + b * 1000  0 + c * 1000 + d * 100 + e * 10 + f << ' ';
                         }
                     }
                 }
             }
         }
     }
    */
    srand(time(0));

    for (int i = 0; i < 6; i++) {
        cout << (rand() % 44) + 1 << endl;
    }

}