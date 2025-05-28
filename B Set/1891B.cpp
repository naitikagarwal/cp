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
        int n , q;
        cin >> n>> q;
        vll a(n);
        vi x(q);
        rep(i, 0, n - 1) cin >> a[i];
        rep(i, 0, q - 1) cin >> x[i];

        vector<bool> applied(31, false);
        rep(i,0, q-1){
            int currX = x[i];
            if (applied[currX]) continue;
            applied[currX] = true;
            ll powerX = 1 << x[i];
            ll powerXMinus1 = 1 << (x[i] - 1);

            for (int i = 0; i < n; i++) {
                if (a[i] % powerX == 0) {
                    a[i] += powerXMinus1;
                }
            }
        }
        rep(i, 0, n - 1) {
            cout << a[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}