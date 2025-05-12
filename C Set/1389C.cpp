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

int func(const string & s, int i, int j){
    int res=0;
    for (char c : s)
        if (c-'0' == i){
            res++;
            swap(i,j);
        }
        if(res%2==1 && i!=j) res--;
        return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cin.ignore();
        int ans=0;
        for0(i,10) for0(j,10){
            ans = max(ans, func(s,i,j));
        }
        size_t n = s.size();
        cout << n-ans << endl;
    }
    return 0;
}