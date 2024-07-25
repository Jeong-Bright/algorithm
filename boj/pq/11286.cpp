#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#define endl '\n'
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

struct cmp {
public:
    bool operator()(int a, int b) {
        if(abs(a) != abs(b)) {
            return abs(a) > abs(b);
        }
        return a > 0 && b < 0;
    }
};

int main() {
    io;
    priority_queue<int, vector<int>, cmp> pQ;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        if(num == 0) {
            if(pQ.empty()) {
                cout << 0 << endl;
            }
            else {
                cout << pQ.top() << endl;
                pQ.pop();
            }
        }
        else {
            pQ.push(num);
        }
    }


}