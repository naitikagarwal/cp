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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int c0=0;
        for(auto c:s){
            if(c=='0')
            c0++;
        }
        if(n&1&&s[n/2]=='0'&&c0>1)
        cout<<"ALICE\n";
        else
        cout<<"BOB\n";
    }
    return 0;
}