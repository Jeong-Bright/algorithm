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
        int num;
        cin >> num;
        if (!stk.empty()) {
            if (num <= stk.top().first) {
                cmp[i] = stk.top().second;
            } else {
                while (!stk.empty() && stk.top().first < num) {
                    stk.pop();
                }
                if(!stk.empty())
                cmp[i] = stk.top().second;
            }
        }
        stk.emplace(num, i);
    }
    for (int i = 1; i <= size; i++) {
        cout << cmp[i] << ' ';
    }
}
