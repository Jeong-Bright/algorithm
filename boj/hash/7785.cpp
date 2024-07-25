#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include <cmath>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {
    unordered_set<string> us;
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        string name, cond;
        cin >> name >> cond;
        if(cond == "enter") {
            us.insert(name);
        }
        else if(cond == "leave") {
            us.erase(name);
        }
    }

    vector<string> vec(us.begin(), us.end());
    sort(vec.begin(), vec.end());

    for (int i = vec.size() - 1; i >= 0; i--) {
        cout << vec[i] << endl;
    }


}