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
        int n;
        ll w; cin >> n >> w;
        vi a(n);
        vi c(30, 0);
        ll l;

        rep (i, 0, n - 1) {
            cin >> l;
            c[log2(l)]++;
        }

        int ans=1;
        ll space=w;
        for(int i=1; i<=n; i++)
        {
            l=-1;
            for(int j=20; j>=0; j--)
            {
                if(c[j]&&1<<j<=space)
                {
                    l=j;
                    break;
                }
            }
            if(l==-1)
            {
                ans++;
                space=w;
                for(int j=20; j>=0; j--)
                {
                    if(c[j]&&1<<j<=space)
                    {
                        l=j;
                        break;
                    }
                }
            }
            c[l]--;
            space-=(1<<l);
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}