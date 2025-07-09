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
    int n,x,y;
    cin >> n >> x >> y;
    vi a(n);
    for0(i,n) cin >> a[i];
    int i=0;
    while(i<n){
        int t = a[i];
        int fl1=1, fl2=1;
        for(int j=1; j<=x && i-j>=0; j++){
            if(a[i-j] < t){
                fl1 = 0;
                break;
            }
        }
        for(int k=1; k<=y && i+k<n; k++){
            if(a[i+k] < t){
                fl2 = 0;
                break;
            }
        }
        if (fl1==1 && fl2==1){
            cout <<i+1<< endl;
            break;
        }
        i++;        
    }
    return 0;
}
