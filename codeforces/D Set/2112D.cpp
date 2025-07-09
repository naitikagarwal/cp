// Aur Bhai Dekhne aagaye ;)
// Author: Naitik Agarwal
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define fr(n) for (int i = 0; i < n; i++)
#define nesfr(x, y)             \
    for (int i = 0; i < x; i++) \
        for (int j = 0; j < y; j++)
#define rep1(i, a, b) for (int i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;
vector<vector<int>> adj;
vector<pair<int,int>> ans;
void dfs1(int u, int p, int t) {
    for (int v : adj[u]) {
        if (v == p) continue;
        if (t)
            ans.emplace_back(u, v);
        else
            ans.emplace_back(v, u);
        dfs1(v, u, t ^ 1);
    }
}

int main(){
    fast;
    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        adj.assign(n+1, {});
        ans.clear();

        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Find a pivot of degree == 2
        int pivot = -1;
        rep(i,1, n) {
            if ((int)adj[i].size() == 2) {
                pivot = i;
                break;
            }
        }

        if (pivot == -1) {
            cout << "NO\n";
            continue;
        }

        // Seed the two arms
        int u = adj[pivot][0];
        int v = adj[pivot][1];

        // First arm: u -> pivot
        ans.emplace_back(u, pivot);
        // Second arm: pivot -> v
        ans.emplace_back(pivot, v);

        // Alternate in the two subtrees
        dfs1(u, pivot, 1);  // start by printing parent->child
        dfs1(v, pivot, 0);  // start by printing child->parent

        // Output
        cout << "YES\n";
        for (auto &e : ans) {
            cout << e.second << " " << e.first << "\n";
        }
    }
    return 0;
}