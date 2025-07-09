#include <bits/stdc++.h>
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)

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

int main() {
    string s;
    cin >> s;
    set<char> distinct(s.begin(), s.end());
    int d = distinct.size();

    if (d % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}