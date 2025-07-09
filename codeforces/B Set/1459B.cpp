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
    int n;
    cin >> n;
    if(n%2==0){
        ll ans =(n/2+1)*(n/2+1);
        cout << ans << "\n";
    }
    else{
        ll ans = 2*(n/2+1)*(n/2+2);
        cout << ans << "\n";
    }

    return 0;
}