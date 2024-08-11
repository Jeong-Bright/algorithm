#include <iostream>
#include <stack>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define INF 1000005
int check[1000005];
int arr[1000005];

int main() {
    io;
    stack<int> stk;
    int N; cin >> N;
    fill(check + 1, check + 1 + N, -1);
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    for (int i = N; i >= 1; i--) {
        while(!stk.empty() && stk.top() <= arr[i]) stk.pop();
        if(!stk.empty()) check[i] = stk.top();
        stk.push(arr[i]);
    }

    for (int i = 1; i <= N; i++) {
        cout << check[i] << ' ';
    }

}