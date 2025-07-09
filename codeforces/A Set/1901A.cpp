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
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vi a(n);
        rep(i,0,n-1){
            cin>>a[i];
        }
        vi v;
        rep(i,0,n-1){
            if (i ==0) v.pb(a[i]);
            else v.pb(a[i]-a[i-1]);
        }
        v.pb(2*(x-a[n-1]));
        int mx = *max_element(v.begin(), v.end());
        cout<<mx<<endl;
    }
    return 0;
}