#include <iostream>

using namespace std;

char arr[55][55];

int main() {
    int N,M, cnt = 0; cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if(arr[i][j] == arr[i][j-1]){
                if(arr[i][j] == 'W') arr[i][j] = 'B';
                else arr[i][j] = 'W';

                cnt++;
            }
        }
    }

    cout << cnt;

}