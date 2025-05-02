#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (!(a < b && b < c)) {
            cout << "NO\n";
            continue;
        }

        int sum = a + b + c;

        if (sum % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        int t = sum / 3;
        
        int n = (t - a) + (t - b);

        if (t >= a && t >= b && t <= c && n >= 1 && n <= c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
