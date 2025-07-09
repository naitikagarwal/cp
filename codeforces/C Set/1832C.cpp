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
        rep(i,0,n-1) cin >> a[i];

        vll b;
        b.push_back(a[0]);
        rep(i, 1, n - 1) {
            if (a[i] != a[i - 1]) b.push_back(a[i]);
        }

        if (b.size() <= 2) {
            cout << b.size() << "\n";
            continue;
        }
        int cnt = 0;
        for (int i = 1; i + 1 < b.size(); i++) {
            if ((b[i] > b[i - 1] && b[i] > b[i + 1]) || 
                (b[i] < b[i - 1] && b[i] < b[i + 1])) {
            } else {
                cnt++;
            }
        }

        cout << b.size() - cnt << "\n";
    }
    return 0;
}