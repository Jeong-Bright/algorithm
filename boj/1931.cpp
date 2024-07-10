#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;


bool compare(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first == b.first) {
        return a.second < b.second;   //오름차순
    }
    else return a.first > b.first;    //내림차순
}

int main() {
    int N , cnt = 0;
    cin >> N;
    vector<pair<long long, long long>> vec;

    for (int i = 0; i < N; i++) {
        long long p, q;
        cin >> p >> q;
        vec.emplace_back(p, q);
    }

    sort(vec.begin(), vec.end(), compare);

    ll en = vec[N - 1].y;
    vec.pop_back();
    cnt++;

    for (ll i = vec.size() - 1; i >= 0; i--) {

        if(vec[i].x < en){
            cnt++;
            en = vec[i].y;
        }

        else if(vec[i].x == en) {
            en = vec[i].y;
        }

    }
    cout << cnt;
}