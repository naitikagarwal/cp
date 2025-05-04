#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        int x = a+b+c+n;
        int mx = max({a, b, c});
        int required = (mx - a) + (mx - b) + (mx - c);
        if(n>=required && x%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}