#include <bits/stdc++.h>
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

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
        int n,m,p,q;
        cin >> n >> m >> p >> q;
        int x =  n/p*q;
        if(n%p==0 && x!=m){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}