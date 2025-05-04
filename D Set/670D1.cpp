#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int low = 0, high = 1e5, ans = 0; 
    while (low<=high)
    {
        int sum=0;
        int mid = (low + high) / 2; 
        vector<int> c(n,0);
        for (int i = 0; i < n; ++i) {
            int z=(mid*a[i])-b[i] ;
            if (z > 0) {
                c[i] = z;
            }
            else {
                c[i] = 0;
            }
        }
        for(int i=0; i<n; i++){
            sum+=c[i];
            }
        if (sum <= k) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    
}