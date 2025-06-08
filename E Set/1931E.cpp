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

ll countZero(ll n){
    ll count = 0;
    while(n > 0){
        if(n % 10 != 0) break ;
        count++;
        n /= 10;
    }
    return count;
}

ll countDigit(ll n){
    ll count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}
bool comp(int a, int b) {
  	return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vll a(n);
        ll sum =0;
        vll z(n);
        rep(i,0,n-1){
            cin >> a[i];
            sum += countDigit(a[i]);
            z[i] = countZero(a[i]);
        }
        sort(z.begin(), z.end(),comp);
        for(int i =0; i<n; i+=2){
            sum -= z[i];
        }
        if (sum>=(m+1)) cout<<"Sasha "<<endl;
        else cout<<"Anna "<<endl;
    }
    return 0;
}