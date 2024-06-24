#include <iostream>
#include <stack>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {

    int size; cin >> size;

    for (int i = 0; i < size; i++) {
        stack<char> stk;
        string parentheses; cin >> parentheses;
        for (char parenthese : parentheses) {
            if (parenthese == '(') {
                stk.push(parenthese);
            }
            else if (parenthese == ')') {
                if(stk.empty()) stk.push(parenthese);
                else if(stk.top() == '(')
                    stk.pop();

            }
        }
        if(stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}