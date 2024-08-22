#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<long long, vector<long long>, greater<>> pQ;

int main() {
    long long N, M, temp = 0, res = 0; cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        pQ.push(num);
    }

    for (int i = 0; i < M; i++) {
        for(int j = 0 ; j < 2; j++) {
            temp += pQ.top();
            pQ.pop();
        }
        for(int j = 0 ; j < 2; j++) {
            pQ.push(temp);
        }
        temp = 0;
    }


    for(int i = 0 ; i < N; i++) {
        res += pQ.top();
        pQ.pop();
    }

    cout << res;

}