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

//not works

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int firstElement = a[0];
        int ans = 1;
        
        vector<int> positions;
        for (int i = 0; i < n; i++) {
            if (a[i] == firstElement) {
                positions.push_back(i);
            }
        }
        
        if (positions.size() == 1) {
            cout << 1 << "\n";
            continue;
        }
        
        vector<int> lastOcc(n + 1, -1);
        for (int i = 0; i < n; i++) {
            lastOcc[a[i]] = i;
        }
        
        ans = positions.size();
        for (int segIdx = 0; segIdx < positions.size() - 1; segIdx++) {
            int segEnd = positions[segIdx];
            
            bool canEndHere = true;
            for (int i = 0; i <= segEnd; i++) {
                if (lastOcc[a[i]] <= segEnd) {
                    canEndHere = false;
                    break;
                }
            }
            
            if (!canEndHere) {
                ans = 1;
                break;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}