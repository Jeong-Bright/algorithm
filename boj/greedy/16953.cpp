#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF 1000000005
using namespace std;


int main() {

    io;

    long long A,B;int cnt = 1;
    cin >> A >> B;



    while(1) {
        if(A == B) break;
        else if(A > B) {
            cnt = -1;
            break;
        }

        if(B % 2 == 0) {
            B /= 2;
            cnt++;
        }

        else if( (B-1) % 10 == 0) {
            B = (B-1) / 10;
            cnt++;
        }

        else {
            cnt = -1;
            break;
        }

    }


    cout << cnt;




}