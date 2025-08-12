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

unordered_map<ll, bool> dp;

bool fun(ll n){
    if(n==0) return true;
    if(dp.find(n) != dp.end()) return dp[n];
    int base = 111111111;
    bool check = false;

    while(base>=11){
        if(base>n) {base/=10; continue;}
        check = check || fun(n-base);
        if(check) return dp[n]=true;
        base/=10;
    }
    return dp[n]=check;
    
}

int main(){
fast;
ll t=1;
cin>>t;
while(t--)
{
    ll x; cin>>x;
    if(fun(x))cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}