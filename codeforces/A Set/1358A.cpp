#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int p,n, m;
        cin>>n>>m;
        p=n*m;
        if(p%2==0) cout<<p/2<<endl;
        else cout<<(p/2)+1<<endl;


    }
    return 0;
}