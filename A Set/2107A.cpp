#include <bits/stdc++.h>
using namespace std;


int gA(const vector<int>& arr) {
    if (arr.empty()) 
        return 0;
    int g = arr[0];
    for (int i = 1; i < (int)arr.size(); ++i) {
        g = __gcd(g, arr[i]);
    }
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        for (int i = 0; i < n; i++) {
            int g1 = a[i];
            vector<int> r1;
            r1.reserve(n-1);
            for (int j = 0; j < n; j++) {
                if (j != i) r1.push_back(a[j]);
            }
            int g2 = gA(r1);
            if (g1 != g2) {
                cout << "YES\n";
                for (int j = 0; j < n; j++) {
                    cout << (j == i ? 1 : 2) << ' ';
                }
                cout << "\n";
                goto next_case;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                vector<int> first2 = {a[i], a[j]};
                vector<int> r1;
                r1.reserve(n-2);
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j) r1.push_back(a[k]);
                }
                int g1 = gA(first2);
                int g2 = gA(r1);
                if (!r1.empty() && g1 != g2) {
                    cout << "YES\n";
                    for (int k = 0; k < n; k++) {
                        cout << ((k == i || k == j) ? 1 : 2) << ' ';
                    }
                    cout << "\n";
                    goto next_case;
                }
            }
        }

        cout << "NO\n";
    next_case:;
    }

    return 0;
}
