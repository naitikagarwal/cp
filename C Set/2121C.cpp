// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal

#include <bits/stdc++.h>
using namespace std;

#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define fr(n) for (int i = 0; i < n; i++)
#define nesfr(x, y)             \
    for (int i = 0; i < x; i++) \
        for (int j = 0; j < y; j++)
#define rep1(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

#define nl cout << "\n"

const int M = 1e9 + 7;
const int N = 2e5 + 5;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int mx = 0;

    fr(n) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }

    vi row(n, 0), col(m, 0);
    int tot = 0;

    fr(n) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == mx) {
                a[i][j] = 1;
                row[i]++;
                col[j]++;
                tot++;
            } else {
                a[i][j] = 0;
            }
        }
    }

    fr(n) {
        for (int j = 0; j < m; ++j) {
            if (row[i] + col[j] - a[i][j] == tot) {
                cout << mx - 1;
                nl;
                return;
            }
        }
    }

    cout << mx;
    nl;
}

int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
