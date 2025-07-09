#include <bits/stdc++.h>

#define rep(i , a , b) for(int i = (a) ; i <= (b) ; i++)
#define per(i , a , b) for(int i = (a) ; i >= (b) ; i--)

#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n);
        rep(i, 0, n - 1) cin >> a[i];

        vll suffix(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            suffix[i] = suffix[i + 1] + a[i];
        }

        vll prefix_max(n);
        prefix_max[0] = a[0];
        for (int i = 1; i < n; ++i)
            prefix_max[i] = max(prefix_max[i-1], a[i]);

        vll result(n);
        for (int i = n-1; i >= 0; --i)
            result[n-1-i] = prefix_max[i] + suffix[i+1];

        for (ll x : result)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
