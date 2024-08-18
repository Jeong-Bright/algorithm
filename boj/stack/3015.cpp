#include <iostream>
#include <algorithm>
#include <stack>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {

    stack<pair<long long,long long>> stk;
    long long N, cnt = 0; cin >> N;
    if(N == 1) {cout << 0; return 0;}
    for (int i = 0; i < N; i++) {
        int num; cin >> num;

        while(!stk.empty() && stk.top().first < num) {
            cnt += stk.top().second;
            stk.pop();
        }

        if(stk.empty()) {
            stk.emplace(num,1);
        }

        else if (stk.top().first == num) {
                long long temp = stk.top().second;
                cnt += temp;
                stk.pop();
                if (!stk.empty()) cnt++;
                stk.emplace(num, ++temp);
        } else {
            cnt++;
            stk.emplace(num, 1);
        }

    }
    cout << cnt;
}