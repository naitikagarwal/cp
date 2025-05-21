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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll x, y;
        cin >> x >> y;
        vll a(n);
        rep(i, 0, n - 1) {
            cin >> a[i];
        }
        ll ans =0;
        
        map<pair<int, int>, int> m;
        int i =n;
        while(i--){
            
            ans = ans + m[ {(x - a [i]% x) % x, a [i]% y} ];

            m[ {a[i] % x, a[i] % y} ] ++;
            
        }
        cout << ans << "\n";
    }
    return 0;
}