#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solved_ac;


int main() {
    int N, cnt = 0; cin >> N;
    double sum = 0;
    if(N == 0) {cout << 0; return 0;}

    for (int i = 1; i <= N; i++) {
        int num; cin >> num;
        solved_ac.push_back(num);
    }

    double K = round(double(N) * 15 / 100);

    sort(solved_ac.begin(), solved_ac.end());

    for (int i = K; i < N - K; i++) {
        sum += solved_ac[i]; cnt++;
    }

    double res = round(sum / cnt);
    cout << res;

}