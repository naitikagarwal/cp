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
        cin>>n;
        vector<pair<ll, ll>> a(n);
        vector<pair<ll, ll>> b(n);
        vector<pair<ll, ll>> c(n);
        rep(i, 0, n - 1) cin >> a[i].first;
        rep(i, 0, n - 1) cin >> b[i].first;
        rep(i, 0, n - 1) cin >> c[i].first;

        rep(i, 0, n - 1){
            a[i].second = i;
            b[i].second = i;
            c[i].second = i;
        }

        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        sort(b.begin(), b.end(), greater<pair<ll, ll>>());
        sort(c.begin(), c.end(), greater<pair<ll, ll>>());

        ll ans=0;
        rep(i, 0,2){
            rep(j,0,2){
                rep(k,0,2){
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout <<ans<<endl;
    }
    return 0;
}