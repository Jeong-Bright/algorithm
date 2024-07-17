#include <iostream>
#include <algorithm>
#include <deque>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
deque<ll> arr, arr2;

ll negative(ll sum, ll chk) {
    while (!arr2.empty()) {

        if (arr2.size() == 1) {
            sum += arr2.front();
            break;
        }

        ll frontVal = arr2.front();
        arr2.pop_front();

        ll div = frontVal * arr2.front();
        ll pls = frontVal + arr2.front();

        chk = (div > pls) ? div : pls;
        sum += chk;

        arr2.pop_front();
    }
    return sum;
}

ll positive(ll sum, ll chk) {
    while (!arr.empty()) {

        if(arr.size() == 1) {
            sum += arr.front();
            break;
        }

        ll backVal = arr.back();
        arr.pop_back();

        ll div = backVal * arr.back();
        ll pls = backVal + arr.back();

        chk = (div > pls) ? div : pls;
        sum += chk;

        arr.pop_back();
    }
    return sum;
}


int main() {
    ll N,sum = 0, chk = 0, neg = 0, pos = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        ll num; cin >> num;
        if(num <= 0) {arr2.push_back(num);
            continue;}
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());

    if(N==1){
        if(arr2.empty())
        cout << arr.front();
        else cout << arr2.front();
        return 0;
    }

    if(!arr2.empty()) {
        neg = negative(sum, chk);
    }
        pos = positive(sum, chk);


    cout << neg+pos;

}

/*
 *
 *
 * 수가 0 또는 1에경우, 무조건 더해준다
 * 수가 음수일 경우, 음수끼리 곱해주거나, 음수가 없다면 가장 작은 수와 곱해준다.
 * 그 외에는 큰 수끼리 곱해주면 된다.
 */