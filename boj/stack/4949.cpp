#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {


    while(1) {
        bool f = true;
        string x; getline(cin, x); if(x == ".") break;
        stack<char> stk;

        for (int i = 0; i < x.size(); i++) {
            if(x[i] == '(' || x[i] == '[') stk.push(x[i]);
            else if(x[i] == ')') {
                if(!stk.empty() && stk.top() == '(') stk.pop();
                else {f = false; break;}
            }
            else if(x[i] == ']') {
                if(!stk.empty() && stk.top() == '[') stk.pop();
                else {f = false; break;}
            }
        }

        if(f == true && stk.empty()) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }

}