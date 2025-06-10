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
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define per(i, a, b) for (long long i = a; i >= b; i--)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                   \
    for (long long i = 0; i < x; i++) \
        for (long long j = 0; j < y; j++)
#define rep1(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
// const int N = 2e5 + 5;

const int N =200003;
const int bits=30;
int pref[N][bits];
int a[N];

void buildPrefix(int n){
    rep(i,0,n-1){
        rep(j,0,29){
            if(a[i]&(1<<j)){
                pref[i+1][j]=pref[i][j]+1;
            }
            else
            pref[i+1][j]=pref[i][j];
        }
    }
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        rep(i, 0, n - 1)
        {
            cin >> a[i];
        }
        buildPrefix(n);
        int q;
        cin >> q;
        while (q--)
        {
            int l, k;
            cin >> l >> k;
            if(a[l-1]<k){
                cout<<-1;nl;
                continue;
            }
            int ans = l;
            int low=l; int high=n;
            while(low<=high){
                int mid = (low+high)/2;
                int num=0;
                for(int i=0; i<bits; i++){
                    if(pref[mid][i]-pref[l-1][i]==mid-l+1){
                        num+=(1<<i);
                    }
                }
                if(num>=k){
                    low = mid+1;
                    ans = max(l,mid);
                }
                else
                high=mid-1;
            }
            cout<<ans;nl;
        }
    }
    return 0;
}
