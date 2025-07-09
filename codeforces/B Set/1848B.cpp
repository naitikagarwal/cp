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
        int n,k;
        cin >> n >> k;
        vi c(n);
        vi v[k+1];
        rep(i,1,k){
            v[i].pb(0);
        }
        rep(i,0,n-1){
            cin >> c[i];
            v[c[i]].pb(i+1);
        }
        rep(i,1,k){
            v[i].pb(n+1);
        }
        int ans = n+1;
        
        rep(i,1,k){
            int mx1 =0, mx2=0;
            rep(j, 1, v[i].size()-1){
                int step = v[i][j] - v[i][j-1]-1;
                if(step<=mx2){
                    
                }
                else if(step >= mx2 && step <= mx1){
                    mx2 = step;
                }
                else if(step >=mx1){
                    mx2 = mx1;
                    mx1 = step;
                }
            }
            ans = min(ans,max(mx2, mx1/2));
        }
        cout << ans << "\n";
    }
    return 0;
}