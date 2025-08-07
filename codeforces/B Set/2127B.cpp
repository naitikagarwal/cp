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
const int N = 2e5 + 5;

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vi a(n);
        for (int i = 0; i < n; i++){
            char p;
            cin >> p;
            if (p == '#')
                a[i] = 1;
            else
                a[i] = 0;
        }
        int s = accumulate(all(a), 0);
        if (x == 1 or x == n or s == 0){
            cout<<1<<endl;
            continue;
        }
        int l = x - 1, r = x - 1;
        while (l >= 0 && a[l] == 0)
            l--;
        while (r < n && a[r] == 0)
            r++;
        if (l == -1){
            if (x - 1 > n - r)
                cout << n - r + 1 << endl;
            else
                cout << x << endl;
        }
        else if (r == n){
            if (n - x > l + 1)
                cout << (l + 2) << endl;
            else
                cout << (n - x + 1) << endl;
        }
        else
        {
            if (l + 1 == n - r){
                cout << (l + 2) << endl;
            }
            else if (l + 1 < n - r){
                if (x - 1 > n - r)
                    cout << (n - r + 1) << endl;
                else
                    cout << x << endl;
            }
            else{
                if (l + 1 > n - x)
                    cout << (n - x + 1) << endl;
                else
                    cout << (l + 2) << endl;
            }
        }

    }
    return 0;
}