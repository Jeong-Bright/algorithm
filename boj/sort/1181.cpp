#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

static bool cmp(string &a, string &b) {
    if(a.size() == b.size()) {
        return a < b;
    }
    else
        return a.size() < b.size();
}

vector<string> vec;

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end(), cmp);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for(auto q : vec) {
        cout << q << '\n';
    }
}