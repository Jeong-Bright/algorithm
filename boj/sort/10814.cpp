#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, string> > vec;

static bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        int x; string y; cin >> x >> y;
        vec.emplace_back(x, y);
    }

   stable_sort(vec.begin(), vec.end(), cmp);

    for(auto x : vec) {
        cout << x.first << ' ' << x.second << '\n';
    }
}
