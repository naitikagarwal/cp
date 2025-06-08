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
        int n, x;
        cin >> n >> x;
        vi a(n);
        rep(i, 0, n - 1) cin >> a[i];
        int f_idx, l_idx;
        rep(i, 0, n - 1) {
            if (a[i] == 1) {
                f_idx = i;
                break;
            }
        }
        per(i, n - 1, 0) {
            if (a[i] == 1) {
                l_idx = i;
                break;
            }
        }
        if((l_idx - f_idx + 1) <= x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}