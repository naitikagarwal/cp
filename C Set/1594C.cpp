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
    while(t--){
        int n; cin>> n;
        char c; cin >> c;
        string s;
        cin >> s;
        bool all_good = true;
        rep(i, 0, n - 1) {
            if (s[i] != c) {
                all_good = false;
                break;
            }
        }

        if (all_good) {
            cout << 0 << "\n";
            continue;
        }

        int ans = -1;
        rep(x,1,n){
            bool ok = true ;
            for(int i =x; i<=n; i+=x){
                if ((s[i-1]) != c ){
                    ok = false;
                    break;
                }
            }
            if(ok){
                ans = x;
                break;
            }
        }
        if (ans != -1) {
            cout << 1 << "\n" << ans << "\n";
        } else {
            cout << 2 << "\n" << n<< " " << n - 1 << "\n";
        }
    }
    return 0;
}