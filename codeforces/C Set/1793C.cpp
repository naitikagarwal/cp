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
        vi a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int l=0, r=n-1, mx = 1, mn =n;
        while(l<=r){
            if(a[l] == mx) {
                l++;
                mx++;
            } else if(a[r] == mx) {
                r--;
                mx++;
            } else if(a[l] == mn) {
                l++;
                mn--;
            } else if(a[r] == mn) {
                r--;
                mn--;
            } else {
                break;
            }
        }
        if(l<= r) {
            cout << l+1<<" "<<r+1<<"\n";
        } else {
            cout << -1<<endl;
        }
    }
    return 0;
}