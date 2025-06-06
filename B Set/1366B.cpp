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

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        int m;
        cin >> n >> x >> m;
        ll lo = x, hi = x;

        while (m--) {
            ll l, r;
            cin >> l >> r;

            if (r >= lo && l <= hi) {
                lo = min(lo, l);
                hi = max(hi, r);
            }
        }
        cout << hi - lo + 1 << "\n";
    }

    return 0;
}