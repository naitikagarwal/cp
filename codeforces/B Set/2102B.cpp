#include <bits/stdc++.h>
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i < (int)(n); ++i)

#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n);
        for0(i, n) cin >> a[i];
        ll m;
        if (a[0]<0) m=-a[0];
        else m=a[0];
        int cnt=0;
        for1(i,n){
            if (llabs(a[i])<m) cnt++;
        }
        if (cnt<=n/2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}