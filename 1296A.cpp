#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int n;
        int odd = 0, even = 0;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        if (even>0 && odd>0){
            cout << "YES" <<endl;
        }
        else if(odd%2==1){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }

    }
}