// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal 
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define fr(n) for(int i=0;i<n;i++)
#define nesfr(x,y) for(int i=0;i<x;i++)for(int j=0;j<y;j++)
#define rep1(i,a,b) for(int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

int main(){
    fast;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        map<ll, vector<ll>> mx, my;
        for(ll i = 0; i < n; ++i) {
            for(ll j = 0; j < m; ++j) {
                ll ai;
                cin >> ai;
                mx[ai].pb(i + 1);
                my[ai].pb(j + 1);
            }
        }
        for(auto &p: mx) sort(p.second.begin(), p.second.end());
        for(auto &p: my) sort(p.second.begin(), p.second.end());
        ll ans = 0ll;
        for(auto &p: mx) {
            auto &v = p.second;
            ll sum = 0ll;
            for(auto i: v) sum += i;
            for(ll i = 0; i < (ll)v.size(); ++i) {
                ll left = v.size() - (i + 1);
                ans += (sum - v[i]) - left * v[i];
                sum -= v[i];
            }
        }
        for(auto &p: my) {
            auto &v = p.second;
            ll sum = 0ll;
            for(auto i: v) sum += i;
            for(ll i = 0; i < (ll)v.size(); ++i) {
                ll left = v.size() - (i + 1);
                ans += (sum - v[i]) - left * v[i];
                sum -= v[i];
            }
        }
        cout << ans; nl;
    }
    return 0;
}