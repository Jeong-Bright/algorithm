#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF 1000000005
using namespace std;


int main() {
    io; int N, sum = 0, temp = 0, cnt = 0; cin >> N;
    priority_queue<int, vector<int>, greater<>> pq;
    vector<int> vec;

    if(N <= 1) {cout << 0; return 0;}
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        pq.push(num);
    }

    while (!pq.empty()) {

        temp += pq.top();
        pq.pop();
        cnt++;

        if (cnt == 2) {
            cnt = 0;
            sum += temp;
            pq.push(temp);
            temp = 0;
        }
    }

    cout << sum;

}