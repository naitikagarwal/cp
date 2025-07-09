#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    ll ans=0;
    ll prev;
    cin.ignore(); // Ignore the newline character after the integer input
    vector<ll> a(t);
    for(int i=0; i<t;i++){
        cin >> a[i];
    }
    for (int i=t-1; i>=0; i--) {
        if(i==t-1) {
            ans+=a[i];
            prev=a[i];
        }
        else{
            if(prev<=0) ans+=0;
            else{
                prev= min(prev-1,a[i]);
            ans+=prev;
            }
            
        }

    }
    cout << ans << endl;
}