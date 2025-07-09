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
        int n;
        cin >> n;
        vll a(n), b(n), c(n);
        rep(i, 0, n - 1) cin >> a[i];
        rep(i, 0, n - 1){
            cin >> b[i];
            c[i] = a[i] -b[i];
        }
        ll mx=*max_element(c.begin(), c.end());
        vi res;
        rep(i, 0, n - 1){
            if(c[i] == mx) {
                res.pb(i + 1); 
            }
        }
        cout<<res.size()<<endl;
        for (auto i:res) cout << i <<" ";
        cout<<endl;
    }
    return 0;
}