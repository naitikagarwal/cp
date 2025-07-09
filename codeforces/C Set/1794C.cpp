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
        cin >> n;
        vll a(n);
        rep(i, 0, n - 1) cin >> a[i];
        vector<int> res;
		for(int i = 0; i < n; i++){
			int l = 1, r = i + 1;
			while(l <= r){
				int m = (l + r) / 2;
				if(a[i - m + 1] >= m){
					l = m + 1;
				}else{
					r = m - 1;
				}
			}
			res.push_back(r);
		}
		for(auto i : res){
			cout << i << " ";
		}
		cout<<"\n";
    }
    return 0;
}