#include <iostream>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;
int a[1000005];
int b[1000005];
int c[2000005];
int x,y;
int main() {

    io;
   cin >> x >> y;

    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    for (int l = 0; l < y; l++) {
        cin >> b[l];
    }

    int aidx = 0 , bidx = 0;

    for (int j = 0; j < x+y; j++) {
        if(aidx == x) c[j] = b[bidx++];
        else if(bidx == y) c[j] = a[aidx++];
        else if(a[aidx] <= b[bidx]) c[j] = a[aidx++];
        else c[j] = b[bidx++];
    }

    for (int q = 0; q < x + y; q++) {
        cout << c[q] << ' ';
    }

}
