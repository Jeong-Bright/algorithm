#include <iostream>
#include <algorithm>
#include <stack>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {

    stack<pair<int,int>> stk, cmpStk;
    int N, cnt = 0; cin >> N;

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        cmpStk.push({num,0});

        if(cmpStk.top().first == num) {
            cmpStk.top().second++;
        }

        if(stk.empty()) {
            stk.emplace(num,0);
        }

        else {
            if(stk.top().first < num) {
                stk.pop();
                cnt++;
                stk.emplace(num, 0);
            }
            else if (stk.top().first > num) {
                cnt++;
            }
        }



    }


}