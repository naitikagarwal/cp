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

    vll a;
    a.push_back(1);
    ll j = 1;
    rep(i, 1, 14)
    {
        j = j * i;
        a.push_back(j);
    }
    ll k = a.size();
    ll tot = 1LL << k;

    while (t--)
    {
        ll n;
        cin >> n;
        ll sum, cnt, p_j;
        ll ans = -1;

        fr(tot)
        {
            sum = 0;
            cnt = 0;
            p_j = 1;
            rep(j, 0, 14)
            {
                if (i & p_j)
                {
                    sum += a[j];
                    cnt++;
                }
                p_j *= 2;
            }
            if (sum > n)
                continue;
            ll rem = n - sum;
            // method to get bits in remaining  for rem = 1101 cnt increase by 3
            while (rem)
            {
                cnt++;
                rem = (rem & (rem - 1));
            }

            if (ans == -1)
            {
                ans = cnt;
            }
            else
            {
                ans = min(ans, cnt);
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}
