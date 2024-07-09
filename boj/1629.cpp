#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define ll long long
ll recur(ll A, ll B, ll C) {

    if(B == 1) return A % C;
    ll res = recur(A, B / 2, C);
    res = res * res % C;
    if(B % 2 == 0) {
        return res;
    }
    return res * A % C;
}

int main() {
    io;
    ll A,B,C;
    cin >> A >> B >> C;
    cout << recur(A, B, C);
}