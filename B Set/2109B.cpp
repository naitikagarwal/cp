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

int fun(ll x) {
    int lg = 63 - __builtin_clzll(x);
    return ( (1LL<<lg) == x ? lg : lg+1 );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        ll n,m,a,b;
        cin >> n >> m >> a >> b;
        //lamda function
        auto F = [&](ll r, ll c){
            return fun(r) + fun(c);
        };

        //possible first cuts
        ll t= F(a,m);
        ll bt= F(n-a+1,m);
        ll lt= F(n,b);
        ll rt= F(n,m-b+1);

        long long best = min( min(t, bt),min(lt, rt) );
        cout << (best + 1) << "\n"; //add initial cut
    }
    return 0;
}