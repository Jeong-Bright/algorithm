#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {
    vector<pair<int,int>> vec;
    int N; cin >> N;

    while(N--) {
        int Q,cnt = 0, cmp = 0; cin >> Q;

        for (int i = 0; i < Q; i++) {
            int n1,n2; cin >> n1 >> n2;
            vec.emplace_back(n1, n2);
        }

        sort(vec.begin(), vec.end());

        cmp = vec[0].second;
        for (int i = 0; i < Q; i++) {
            if(cmp >= vec[i].second) {
                cnt++;
                cmp = vec[i].second;
            }
        }
        cout << cnt << endl;
        vec.clear();
    }

}