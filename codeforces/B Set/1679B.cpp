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

        int n,q,t;
        cin >> n>>q;

        ll a[n], sum=0;
            vector<int> updated(n, 0);
        int time = 0;
        ll base = 0;

        rep(i,0,n-1){
            cin>>a[i];
            sum += a[i];
        }

        ll x;
        int j;

        rep(i,0,q-1){
            cin >> t;
            if (t == 1) {
                int j;
                ll x;
                cin >> j >> x;
                j--;

                ll prev = (updated[j] < time) ? base : a[j];
                sum += (x - prev);
                a[j] = x;
                updated[j] = time;
            }
            else {
                cin >> base;
                sum = base * n;
                time++; 
            }
            cout << sum << endl;
        }

    return 0;
}