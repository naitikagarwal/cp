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
        vi a(n);
        cout << 2;
        cout << ' ' << n;
        for (int x = n-1; x >= 3; --x) {
            cout << ' ' << x;
        }
        cout << ' ' << 1 << '\n';
    }
    return 0;
}