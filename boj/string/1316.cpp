#include <iostream>
#include <string>

using namespace std;
int arr[123];
int main() {
    int N,res=0; cin >>N;
    for (int i = 0; i < N; i++) {
        string x; cin >> x;
        int Q = x.size(), cnt = 0;
        for (int j = 0; j < Q ; j++) {
            int ascii = x[j];
            if(x[j] != x[j-1] && arr[ascii] == 0) {
                arr[ascii]++;
                cnt++;
            }

            else if(x[j] == x[j-1]) {arr[ascii]++; cnt++;}

            else {
                break;
            }
        }
        fill(arr, arr + 123, 0);
        if(cnt == Q) res++;
    }
    cout << res;
}