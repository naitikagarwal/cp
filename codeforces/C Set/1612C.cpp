
#include <bits/stdc++.h>

#define rep(i , a , b) for(int i = (a) ; i <= (b) ; i++)
#define per(i , a , b) for(int i = (a) ; i >= (b) ; i--)

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


static const int MAXV = 5000;
static const int INF  = 1000000000;

long long add(int x) {
    return x * 1ll * (x + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool flag = false;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (mid >= k) {
                flag = (add(k) + add(k - 1) - add(2 * k - 1 - mid) >= x);
            } else {
                flag = (add(mid) >= x);
            }
            if (flag) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}