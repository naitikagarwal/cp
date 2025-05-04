#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string str;
    ll n1,n2,n3,p1,p2,p3;
    cin>>str;
    
    cin>>n1>>n2>>n3; //available already
    cin>>p1>>p2>>p3; // price of each...
    ll r; // total money
    cin >>r;
    ll b=0, s=0,c=0; //b:s:c is ratio we required
    for(char ch : str){
        if(ch=='B') b++;
        else if (ch=='C') c++;
        else if (ch=='S') s++;
    }
    ll low=0, high =1e13, ans=0; // high > 1e12
    while(low<=high){
        ll mid = (low + high)/2; // mid is targeted no. of burger
        // ll x1, x2, x3;// extra need
        ll x1=max(0LL, b * mid-n1);
        ll x2=max(0LL, s * mid-n2);
        ll x3=max(0LL, c * mid-n3);
        ll cost = x1 * p1 + x2 * p2 + x3 * p3;
        
        if(cost<=r){
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    cout<<ans<<endl;
    
}