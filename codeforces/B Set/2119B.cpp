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
        int n;
        ll px, py, qx, qy;
        cin >> n;
        cin >> px >> py >> qx >> qy;
        vll a(n);
        ll sum=0, mx = 0;
        rep(i, 0, n - 1)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        ll dx = qx - px;
        ll dy = qy - py;
        ll D2 = dx * dx + dy * dy;

        ll mn = max<ll>(0LL, mx - (sum - mx));
        if ((mn * mn) <= D2 && D2 <= (sum * sum))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
