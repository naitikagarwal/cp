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
    int n;
    cin>>n;
    vector<vector<ll>> adj (n, vll());
    vll deg(n,0);
    int highest = -1, mx=-1;

    rep(i, 1,n-1){
        ll u,v;
        cin>>u>>v;
        u--; v--;
        adj[u].pb(v);
        adj[v].pb(u);
        deg[u]++; deg[v]++;
        if(deg[u] >mx){
            mx= deg[u];
            highest = u;
        }
        if(deg[v] >mx){
            mx= deg[v];
            highest = v;
        }

    }
    if(n<=3) cout<<0<<endl;
    else{
        ll p=0;
        fr(n){
            if(deg[i]==1) p++;
        }
        ll m = 0;
        fr(n){
            ll q=0;
            for(int j=0; j<adj[i].size(); j++){
                if(deg[adj[i][j]] == 1) q++;
            }
            m = max(m, q);
        }
        cout<<p-m<<endl;
    }
}
return 0;
}