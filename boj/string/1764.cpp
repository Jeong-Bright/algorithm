#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main( ){

    ios::sync_with_stdio(); cin.tie();
    set<string> st; vector<string> vec;
    int N,M,cnt = 0; cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string x; cin >> x;
        st.insert(x);
    }

    for (int i = 0; i < M; i++) {
        string y; cin >> y;
        unsigned long size = st.size();
        st.insert(y);
        if(st.size() == size) {
            vec.push_back(y);
        }
    }
    sort(vec.begin(), vec.end());
    cout << vec.size() << '\n';
    for(auto x : vec) cout << x << '\n';


}
