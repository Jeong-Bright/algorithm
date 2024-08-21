#include <iostream>

using namespace std;

int main() {

    long long N; cin >> N;

    long long res = 0, i = 1;
    while(res + i <= N) {
        res += i++;
    }

    cout << i - 1;

}