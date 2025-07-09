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
    int t;
    cin >>t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        int s1,s2;
        //for shop 1 be valid
        if(a<c) s1=1;
        else s1=-1;
        //for shop 2 be valid
        if(a*b >c) s2 = b;
        else s2 = -1;
        cout << s1 << " " << s2 << endl;

    }
}