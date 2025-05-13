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
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll xk, yk, xq, yq;
        cin>>xk>>yk>>xq>>yq;
        set<pair<ll, ll>> s1,s2;
        s1.insert({xk-b,yk-a});
        s1.insert({xk+b,yk+a});
        s1.insert({xk-a,yk+b});
        s1.insert({xk+a,yk-b});
        s1.insert({xk-a,yk-b});
        s1.insert({xk-b,yk+a});
        s1.insert({xk+b,yk-a});
        s1.insert({xk+a,yk+b});
        s2.insert({xq+b,yq+a});
        s2.insert({xq-b,yq-a});
        s2.insert({xq-a,yq+b});
        s2.insert({xq+a,yq-b});
        s2.insert({xq-a,yq-b});
        s2.insert({xq-b,yq+a});
        s2.insert({xq+b,yq-a});
        s2.insert({xq+a,yq+b});
        int ans = 0;
        for(auto x : s1)
            if(s2.find(x) != s2.end())
                ans++;
        cout << ans << '\n';
    }
    return 0;
}