#include <iostream>
#include <algorithm>
#include <set>
#define endl '\n'
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {
    io;

    int N; cin >> N;

    while (N--) {
        int x; cin >> x; multiset<ll> s;
        for (int i = 0; i < x; i++) {
            char c; cin >> c;

            if(c == 'I') {
                ll num;
                cin >> num;
                s.insert(num);
            }
            else if(c == 'D') {
                ll num;
                cin >> num;
                if(!s.empty()) {
                    if (num == -1) {
                        s.erase(s.begin());
                    } else if (num == 1) {
                        s.erase(prev(s.end()));
                    }
                }
            }
        }
        if(!s.empty()) {
            cout << *prev(s.end()) << ' ' << *s.begin() << endl;
        }
        else cout << "EMPTY" << endl;
    }

}