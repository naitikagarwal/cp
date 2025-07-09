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
    while (t--){
        int n;
        cin >> n;
        int a[n];
        rep(i, 0, n - 1) {
            cin >> a[i];
            if (i%2 ==1) a[i] = -a[i];
        }
        map <ll, ll> m;
        m[0] =1;
        int flag =0;
        ll s=0 ;
        rep (i,0,n-1){
            s+= a[i];
            if(m[s]){
                flag =1;
                break;
            }
            else ++m[s];
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}