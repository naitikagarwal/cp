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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin>>t;
    while(t--){
       ll n,k,x;
cin>>n>>k>>x;
ll min_sum =k*(k+1)/2;
ll mx_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
if (x>= min_sum && x<=mx_sum)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    }
    return 0;
}