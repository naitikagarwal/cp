
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

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vll a(n+1);
        vll v(n+1);
        a[0]=1;
        a[1] =0;
        a[2] =1;

        if (n<=2) cout << a[n]<<endl;
        else{
            v[0] = a[0];
            v[1] = (v[0] + a[1]) % MOD;
            v[2] = (v[1] + a[2]) % MOD;
            ll ans=0;
            int i = 3;
            for(int i = 3; i <= n; ++i){
            a[i] = v[i-2];
            v[i] = (v[i-1] + a[i]) % MOD;
        }

        cout << a[n] << "\n";
        }


    }
    return 0;
}