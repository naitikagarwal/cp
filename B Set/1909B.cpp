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
        ll n;
        cin >> n;
        vll a(n);
        rep(i,0,n-1) cin >> a[i];
        ll ans = 2;
        ll k=1;
        while(k<60){
            ll c = 1ll<<k;
            set<ll> s;
            for (auto i : a){
                s.insert(i % c);
            }
            if (s.size() == 2){
                ans = c;
                break;
            }
            k++;
        }
        
        cout << ans << endl;

    }
    return 0;
}