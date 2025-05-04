#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int x, y, z;
        cin >> x >> y >> z;

        //x y z
        //y x z
        //y z x
        //z y x
        if(x>y) swap(x,y);
        if(x>z) swap(x,z);
        if(y>z) swap(y,z);
        if(y!=z){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl<<x<<" "<<x<<" "<<z<<endl;

    }
}