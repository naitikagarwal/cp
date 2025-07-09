
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        vi a(n);
        vi cnt(31,0);

        rep(i, 0, n - 1) {
            cin >> a[i];
            per(j,30,0){
                if(a[i] & (1 << j)){
                    cnt[j]++;
                }
            }
        }
        int ans=0;
        for(int i = 30; i >= 0; --i) {
            int need = n - cnt[i];
            if(need <= k) {
                k -= need;
                ans += (1 << i);
            }
        }
        cout << ans << "\n";
        
    }
    return 0;
}