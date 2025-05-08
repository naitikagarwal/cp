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

// heck if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

// return the next prime after n
int nextPrime(int n) {
    int candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n,m;
    cin >> n >> m;
    vi a(n*m);
    int y=0;
    int ** arr = new int*[n];
    for(int i=0; i<n; i++) arr[i] = new int[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(isPrime(arr[i][j])){
                a[y]=0;
                y++;
            }
            else{
                int q=nextPrime(arr[i][j])-arr[i][j];
                a[y]=q;
                y++;
            }
        }
    }
    

    //checking row wise
    vi r;
    for(int i = 0; i < n; i++) {
        int sumr = 0;
        for(int j = 0; j < m; j++) {
            sumr += a[i * m + j];
        }
        r.pb(sumr);
    }

    // checking col-wise
    vi c;
    for(int j = 0; j < m; j++) {
        int sumc = 0;
        for(int i = 0; i < n; i++) {
            sumc += a[i * m + j];
        }
        c.pb(sumc);
    }
    
    int mn1 = *min_element(r.begin(), r.end());
    int mn2 = *min_element(c.begin(), c.end());
    
    cout<<min(mn1,mn2)<<endl;




    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

