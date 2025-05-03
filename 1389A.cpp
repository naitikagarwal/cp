#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long r,l,t;
    cin >> t;
    int x=0;
    while (t--){
        
        cin >> l >>r ;
        if(2*l<=r){
            cout << l<<" "<<2*l << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
    }
}