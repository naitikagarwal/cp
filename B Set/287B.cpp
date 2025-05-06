#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,k;
    cin >> n >> k;
    ll low =1; 
    ll high = k-1;
    ll ans =-1;

    while(low<=high){
        ll mid = (low + high) / 2;
        ll sum = mid*(2*k - mid -1 )/2;
        if(sum>=n-1){
            ans=mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    cout<<((n!=1) ? ans : 0)<<endl;
}