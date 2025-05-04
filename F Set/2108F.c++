//not done

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> reach_list(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            reach_list[i] = a[i] + i;
        }
        sort(reach_list.begin(), reach_list.end());

        bool can(int m){
        }

    }
}