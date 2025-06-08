#include <bits/stdc++.h>

#define rep(i , a , b) for(int i = (a) ; i <= (b) ; i++)
#define per(i , a , b) for(int i = (a) ; i >= (b) ; i--)

#define pb push_back
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;


bool canExplode(vector<long long>& a) {
    int n = a.size();

    if (n == 1) {
        return a[0] >= 0;
    }
    
    if (n == 2) {
        long long a1 = a[0], a2 = a[1];
        
        if ((2*a1 - a2) % 3 != 0) return false;
        long long k2 = (2*a1 - a2) / 3;
        
        if (k2 < 0) return false;

        long long k1 = a1 - 2*k2;
        if (k1 < 0) return false;
        if (2*k1 + k2 != a2) return false;
        
        return true;
    }
    long long a1 = a[0], a2 = a[1];
    
    if ((2*a1 - a2) % (n + 1) != 0) return false;
    long long k2 = (2*a1 - a2) / (n + 1);
    
    if (k2 < 0) return false;
    
    long long k1 = a1 - k2 * n;
    if (k1 < 0) return false;
    
    for (int i = 0; i < n; i++) {
        long long expected = k1 * (i + 1) + k2 * (n - i);
        if (expected != a[i]) return false;
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (canExplode(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}