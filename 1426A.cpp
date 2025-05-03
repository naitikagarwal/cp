#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long r,l,t;
    cin >> t;
    // int x=0;
    int n,x;
    while (t--){
        cin>>n>>x;
        int t=0;
        while((t*x)+2<n){
            t++;
        }
        cout << t+1 << endl;
    }
}