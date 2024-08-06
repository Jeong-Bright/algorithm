#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define endl '\n'
#define x first
#define y second
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define INF 1000000005
using namespace std;

int main() {
    io;
    string a,b;
    double c, sum = 0, gradeSum = 0;

    for (int i = 0; i < 20; i++) {
        cin >> a >> c >> b;
        double temp = 0;
        if(b == "A+") {
            temp = c * 4.5;
        }
        else if(b == "A0") {
            temp = c * 4.0;
        }
        else if(b == "B+") {
            temp = c * 3.5;
        }
        else if(b == "B0") {
            temp = c * 3.0;
        }
        else if(b == "C+") {
            temp = c * 2.5;
        }
        else if(b == "C0") {
            temp = c * 2.0;
        }
        else if(b == "D+") {
            temp = c * 1.5;
        }
        else if(b == "D0") {
            temp = c * 1.0;
        }
        else if(b == "F") {
            temp = c * 0;
        }
        else continue;
        sum += temp;
        gradeSum += c;
    }

    cout.precision(7);
    sum /= gradeSum;
    cout << sum;

}