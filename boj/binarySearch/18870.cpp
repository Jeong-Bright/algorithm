#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int arr[1000005];

int main() {

    vector<int> vec, tmp;
    int N; cin >> N;
    for (int i = 0; i < N; i++){ cin >> arr[i];
        tmp.push_back(arr[i]);
    }
    sort(tmp.begin(), tmp.end());
    for(int i = 0 ; i < N; i++) {
        if(i == 0 || (tmp[i] != tmp[i-1])) vec.push_back(tmp[i]);
    }
    for (int i = 0; i < N; i++) {
        cout << lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin() << endl;
    }

}