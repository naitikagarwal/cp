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
    while(t--) {
        int n;
        cin >> n;

        vll a(n);
        rep(i, 0, n - 1) cin >> a[i];

        if (a[n - 1] < a[n - 2]) {
            cout << -1 << endl;
        }
        else if (a[n - 1] >= 0) {
            cout << n - 2 << endl;
            rep(i, 1, n - 2) {
                cout << i << " " << n - 1 << " " << n << '\n';
            }
        }
        else if (a[n - 1] < 0) {
            if (is_sorted(a.begin(), a.end())) {
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}