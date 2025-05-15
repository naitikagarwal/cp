#include <bits/stdc++.h>

#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, a, b) for(int i = (a); i >= (b); i--)

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
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vi a(26, 0);
        rep(i, 0, n - 1) {
            a[s[i] - 'a']++;
        }
        int cnt = 0;
        rep(i, 0, 25) {
            cnt += a[i] % 2;
        }

        if(cnt <= k + 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}