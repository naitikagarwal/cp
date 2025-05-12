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
    while(t--){
        ll n;
        cin >> n;
        vi a(n);
        for0(i, n) cin >> a[i];
        ll mx=*max_element(a.begin(), a.end());
        ll mn=*min_element(a.begin(), a.end());
        ll x=0, y=0;
        for0(i, n){
            if(a[i]==mx) x++;
            else if(a[i]==mn) y++;
        }
        if(mn==mx) cout <<n*(n-1)<<endl;
        else
        cout<< 2*x*y << endl;
    }
    

    return 0;
}