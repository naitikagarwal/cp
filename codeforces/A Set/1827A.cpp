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

const int MOD = 1e9 + 7;
bool comp(int a, int b) {
    return a > b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        vi a(n);
        rep(i,0,n-1) cin >> a[i];
        sort(a.begin(), a.end());
        vi b(n);
        rep(i,0,n-1) cin >> b[i];
        sort(b.begin(), b.end(), comp);
        ll ans = 1;
        rep(i,0,n-1){
            int cnt = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            ans = ans * max(cnt - i, 0) % MOD;
        }
        cout << ans << "\n";
        
    }
    return 0;
}