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
#define min3(a, b, c) std::min({a, b, c})
#define min4(a, b, c, d) std::min({a, b, c, d})
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define fr(n) for (int i = 0; i < n; i++)
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
        cin >> n;
        vll a(n);
        rep(i, 0, n - 1) cin >> a[i];
        vector<ll> prefMin(n), sufMax(n);
        prefMin[0] = a[0];
        for (int i = 1; i < n; ++i) prefMin[i] = min(prefMin[i - 1], a[i]);
        sufMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i) sufMax[i] = max(sufMax[i + 1], a[i]);

        cout << 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (prefMin[i - 1] < a[i] && a[i] < sufMax[i + 1]) cout << 0;
            else cout << 1;
        }
        cout << 1;nl;
    }
    return 0;
}
