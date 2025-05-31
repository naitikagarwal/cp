
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


static const int MAXV = 5000;
static const int INF  = 1000000000;

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
        rep(i, 0, n - 1) {
            cin >> a[i];
        }
        int G = a[0];
        for (int i = 1; i < n; i++) {
            G = __gcd(G, a[i]);
        }
        vector<int> b(n);
        int s = 0;
        for (int i = 0; i < n; i++) {
            b[i] = a[i] / G;
            if (b[i] == 1) s++;
        }
        if (s > 0) {
            cout << (n - s) << "\n";
            continue;
        }

        static int d[MAXV+1];
        rep(g,1, MAXV) {
            d[g] = INF;
        }
        deque<int> q;
        for(int i = 0; i < n; i++){
            int g = b[i];
            if(d[g] > 1){
                d[g] = 1;
                q.push_back(g);
            }
        }

        while(!q.empty()){
            int g = q.front();
            q.pop_front();
            int ocur = d[g];
            
            if(g == 1) break; //gcd =1 then break

            for(int i = 0; i < n; i++){
                int ng = __gcd(g, b[i]);
                if(d[ng] > ocur + 1){
                    d[ng] = ocur + 1;
                    q.push_back(ng);
                }
            }
        }

        cout << n-1+d[1]-1 << "\n";


    }
    return 0;
}