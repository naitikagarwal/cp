#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cin.ignore();
    int drink = (k * l)/nl ;
    int slice = (c * d);
    int salt = p/np;
    int ans = min(drink, min(slice, salt));
    cout<<ans/n<<endl;
    return 0;
}