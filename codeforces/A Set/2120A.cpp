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
        int l[3], b[3];
        cin >> l[0] >> b[0] >> l[1] >> b[1] >> l[2] >> b[2];

        ll area = 0;
        for (int i = 0; i < 3; i++) {
            area += (ll)l[i] * b[i];
        }
        ll S = llround(sqrt(area));
        if (S * S != area)
        {
            cout << "NO\n";
            continue;
        }
        bool ok = false;
        array<int,3> p = {0,1,2};
        do {
            int i = p[0], j = p[1], k = p[2];
            if (b[i] == S && b[j] == S && b[k] == S
             && (ll)l[i] + l[j] + l[k] == S) {
                ok = true;
            }
            if (l[i] == S && l[j] == S && l[k] == S
             && (ll)b[i] + b[j] + b[k] == S) {
                ok = true;
            }
            if (l[i] == S
             && b[j] == S - b[i] && b[k] == S - b[i]
             && (ll)l[j] + l[k] == S) {
                ok = true;
            }
            if (b[i] == S
             && l[j] == S - l[i] && l[k] == S - l[i]
             && (ll)b[j] + b[k] == S) {
                ok = true;
            }
            if (ok) break;
        } while (next_permutation(p.begin(), p.end()));

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
