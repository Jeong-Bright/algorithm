#include <iostream>
#include <queue>
#define endl '\n'
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {
    int size; cin >> size;
    queue<int> card;
    for (int i = 1; i <= size; i++) {
        card.push(i);
    }
    while (card.size() != 1) {
        card.pop();
        int back = card.front();
        card.push(back);
        card.pop();
    }
    cout << card.back();
}