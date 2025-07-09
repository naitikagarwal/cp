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
    while(t--){
        int n; ll c;
        cin >> n >> c;
        vi a(n);
        rep(i, 0, n - 1) cin >> a[i];
        int l = 1, r = 1e9;
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            ll s = 0;

            for (int i = 0; i < n; ++i) {
                ll val = a[i] + 2LL * mid;
                s += val * val;
                if (s > c) break;
            }

            if (s == c) {
                ans = mid;
                break;
            }

            if (s > c) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (ans != -1)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}