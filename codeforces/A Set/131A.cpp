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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    string s;
    cin >> s;
    cin.ignore();
    int i=0;
    int flag=1;
    int n=s.size();
    while(i<n){
        if(i!=0 && islower(s[i])){
            flag=0;
            break;
        }
        i++;
    }
    if (flag==0){
        cout << s <<endl;
    }
    else{
        if(isupper(s[0])) s[0]=tolower(s[0]);
        else
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }

    cout << s << '\n';
    }
    return 0;
}