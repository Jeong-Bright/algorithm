#include <iostream>
#include <stack>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {

    io;
    int size;
    int cmp[500005] = {};
    stack<pair<int, int>> stk, cmpstk;


    cin >> size;
    for (int i = 1; i <= size; i++) {
        int num; cin >> num;
        stk.emplace(num, i);
    }


}
