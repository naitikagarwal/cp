// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal 

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;
typedef vector<ll> vll;

int func(int idx, int n, vector<int> &dp, vll &s) {
    if (dp[idx] != -1) return dp[idx];
    int cnt = 0;
    for (int j = 2 * (idx + 1) - 1; j < n; j += (idx + 1)) {
        if (s[j] > s[idx]) {
            cnt = max(1 + func(j, n, dp, s), cnt);
        }
    }
    return dp[idx] = cnt;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        
        vector<int> dp(n, -1);
        int maxi = 1;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, 1 + func(i, n, dp, s));
        }
        cout << maxi << "\n";
    }
    return 0;
}
