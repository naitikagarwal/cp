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
        int n , k;
        cin >> n>> k;
        vi a(n);
        rep(i, 0, n - 1) cin >> a[i];

        sort(a.begin(), a.end());
        
        vll prefix(n+1,0);
        rep(i, 0, n - 1) {
            prefix[i + 1] = prefix[i] + a[i];
        }
        ll maxi =0;
        for (int i = 0; i <= k; ++i) {
            int left = 2 * i;
            int right = n - (k - i); // right boundary after removing (k - i) largest
            if (left > right) continue; // invalid state

            ll sum = prefix[right] - prefix[left];
            maxi = max(maxi, sum);
        }
        cout << maxi << endl;
    }
    return 0;
}