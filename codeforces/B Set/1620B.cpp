#include <bits/stdc++.h>  // This will work only for g++ compiler. 


#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int t;
    cin >> t;
    while (t--) {
        ll w, h;
        cin >> w >> h;

        int k1;
        cin >> k1;
        vi a1(k1);
        for0(i, k1) cin >> a1[i];
        int h1 = *max_element(a1.begin(), a1.end()) - *min_element(a1.begin(), a1.end());

        int k2;
        cin >> k2;
        vi a2(k2);
        for0(i, k2) cin >> a2[i];
        int h2 = *max_element(a2.begin(), a2.end()) - *min_element(a2.begin(), a2.end());

        ll area1 = max(h1, h2) * h;

        int k3;
        cin >> k3;
        vi a3(k3);
        for0(i, k3) cin >> a3[i];
        int v1 = *max_element(a3.begin(), a3.end()) - *min_element(a3.begin(), a3.end());

        int k4;
        cin >> k4;
        vi a4(k4);
        for0(i, k4) cin >> a4[i];
        int v2 = *max_element(a4.begin(), a4.end()) - *min_element(a4.begin(), a4.end());

        ll area2 = max(v1, v2) * w;

        cout << max(area1, area2) << endl;
    }

    return 0;
}