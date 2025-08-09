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
#define rep(i,a,b) for(long long i=a;i<=b;i++)
#define per(i,a,b) for(long long i=a;i>=b;i--)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep1(i,a,b) for(long long i=a;i<b;i++)
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
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vi a(n), b(n);
    fr(n) cin>>a[i];
    fr(n) cin>>b[i];


    ll base = 0;
    for (int i = 0; i < n; i++){
        base += abs(a[i] - b[i]);
    }

    vector<pair<int, int>> c;
    fr(n){
        c.push_back({min(a[i], b[i]), max(a[i], b[i])});
    }
    sort(c.begin(), c.end());
    bool ok = false;
    
    // a[i], a[j], b[i], b[j] 
    // he will pair up largest with smallest and 2nd larges with 2nd samllest..
    rep(i,1,n-1){
        if(c[i-1].second >= c[i].first and ok == false){
            cout<<base;nl;
            ok =true;
        }
    }
    if(ok) continue;
    int const INF = 1e9;
    int g =INF;
    rep(i,1,n-1){
        g = min(g, c[i].first - c[i-1].second);
    }


    base += 2 * g;

    cout<<base;nl;
    

}
return 0;
}