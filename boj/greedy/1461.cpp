#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
#define INF 100000005
vector<int> positive;
vector<int> negative;

int main() {

    int N, M, mn = INF, mx = -INF, sum = 0; cin >> N >> M;
    if(N == 1) {cout << 1; return 0;}
    for (int i = 0; i < N; i++) {
        int num; cin >> num;

        if(num > 0) {positive.push_back(num);
            mx = max(mx, num);}
        else {negative.push_back(num);mn = min(mn, num);}
    }
    if(mn == INF) mn = 0; if(mx == -INF) mx = 0;

    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end(), greater<>());


    if(mx > abs(mn)) {
        int fir = N - negative.size();
        while(!negative.empty()) {
                sum += abs(negative.back()) * 2;
                for (int i = 0; i < M; i++) {
                    if(!negative.empty())
                        negative.pop_back();
                }
            }
            while(!positive.empty()) {
                if(positive.size() == fir){
                    sum += positive.back();
                }
                else sum += positive.back() * 2;
                for (int i = 0; i < M; i++) {
                    if(!positive.empty())
                        positive.pop_back();
                }
            }
    }
    else {
        int fir = N - positive.size();
        while(!positive.empty()) {
            sum += positive.back() * 2;
            for (int i = 0; i < M; i++) {
                if(!positive.empty())
                positive.pop_back();
            }
        }

        while(!negative.empty()) {
            if(negative.size() == fir){
                sum += abs(negative.back());
            }
            else sum += abs(negative.back()) * 2;
            for (int i = 0; i < M; i++) {
                if(!negative.empty())
                negative.pop_back();
            }
        }
    }
    cout << sum;
}

/*
 *
 * 코드 최적화가 좀 필요해보임
 */