#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    int A[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> A[i][j];
            if (A[i][j] == 1) {
                x = abs(i - 2) + abs(j - 2);
                
            }
        }
    }
    cout << x << endl;

}