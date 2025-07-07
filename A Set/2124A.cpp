// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal 
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("no-stack-protector")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
//#pragma GCC optimize("fast-math")
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx,avx2,fma")
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i] = a[i];
        }
        sort(c.begin(), c.end());

        bool com_diff = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != c[i]) {
                com_diff = true;
                break;
            }
        }

        if (!com_diff) {
            cout << "NO\n";
        } else {
            vector<long long> arr;
            for (int i = 0; i < n; i++) {
                if (a[i] != c[i]) {
                    arr.push_back(a[i]);
                }
            }
            cout << "YES\n";
            cout << arr.size() << "\n";
            for (auto x : arr) {
                cout << x << "\n";
            }
        }
    }
    return 0;
}
