#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define ll long long
int rc[50];
int lc[50];

void preorder(int cur) {
    cout << char(cur+'A'-1);
    if(lc[cur] != 0) preorder(lc[cur]);
    if(rc[cur] != 0) preorder(rc[cur]);

}

void inorder(int cur) {
    if(lc[cur] != 0) inorder(lc[cur]);
    cout << char(cur+'A'-1);
    if(rc[cur] != 0) inorder(rc[cur]);

}
void postorder(int cur) {
    if(lc[cur] != 0) postorder(lc[cur]);
    if(rc[cur] != 0) postorder(rc[cur]);
    cout << char(cur+'A'-1);
}

int main() {
    io;
    int N; cin >> N;

    for (int i = 1; i < N; i++) {
        char c,l,r;
        cin >> c >> l >> r;
        if(l != '.') lc[c - 'A' + 1] = l - 'A' + 1;
        if(r != '.') rc[c - 'A' + 1] = r - 'A' + 1;
    }
    preorder(1); cout << endl;
    inorder(1);cout << endl;
    postorder(1);

}