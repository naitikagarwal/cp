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
        ll x;
        cin >> x;
        
        ll s =0;
        rep(i,0,2){
            vll a(n);
            rep(j, 0, n - 1) cin >> a[j];
            rep(j,0,n-1){
                if ((x | a[j]) != x) break;
                s |= a[j];
            }
        }
        if(s==x) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
