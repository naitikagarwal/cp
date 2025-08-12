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
    vll a(n), b(n);
    fr(n) cin>>a[i];
    fr(n) cin>>b[i];

    if(a[n-1] != b[n-1]){
        cout<<"NO\n";
    }
    else{
        bool ok =true;
        for(int i=n-2; i>=0; i--){
            if(a[i] == b[i] || (a[i] ^ a[i + 1]) == b[i] || (a[i] ^ b[i + 1]) == b[i]){continue;}
            ok=false;
            break;
        }
        if (ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
return 0;
}