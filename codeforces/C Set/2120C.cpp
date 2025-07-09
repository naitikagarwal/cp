// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
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
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define fr(n) for (int i = 0; i < n; i++)
#define nesfr(x, y)             \
    for (int i = 0; i < x; i++) \
        for (int j = 0; j < y; j++)
#define rep1(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll found_k = -1;
        for (ll k = 1; k <= n; ++k)
        {
            ll f = (k - 1) * k / 2 + k * (n - k);
            // i tried to find k which is root in such a way that node smalller than k are conenected in a single path, for all that divine will be k-1 + k-2 + ... +1 and greater than k directly attached to k so for all that, divine will be k * (n - k) 
            if (f == m)
            {
                found_k = k;
                break;
            }
        }

        if (found_k == -1)
        {
            cout << "-1\n";
            continue;
        }
        cout << found_k << "\n";
        rep(i,1,found_k-1){
            if(i==1){
                cout<<found_k<<" "<<i<<"\n";
            }
            else{
                cout<<i-1<<" "<<i<<"\n";
            }
        }
        rep(i,found_k+1,n){
            cout<<found_k-1<<" "<<i<<"\n";
        }
    }
    return 0;
}
