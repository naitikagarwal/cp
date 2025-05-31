
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


static const int MAXN = 100000;
static const int MOD  = 998244353;

int ad_mod(int a, int b) {
    int s = a + b;
    if (s >= MOD) s -= MOD;
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    static int pow2[MAXN + 1];
    pow2[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        pow2[i] = ad_mod(pow2[i - 1], pow2[i - 1]);
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n], q[n];
        rep(i, 0, n - 1) {
            cin >> p[i];
        }
        rep(i, 0, n - 1) {
            cin >> q[i];
        }

        vi mxp_val(n), mxp_idx(n);
        
        mxp_val[0] = p[0];
        mxp_idx[0] = 0;
        for (int i = 1; i < n; i++) {
            if (p[i] > mxp_val[i - 1]) {
                mxp_val[i] = p[i];
                mxp_idx[i] = i;
            } else {
                mxp_val[i] = mxp_val[i - 1];
                mxp_idx[i] = mxp_idx[i - 1];
            }
        }
        vi mxq_val(n), mxq_idx(n);
        mxq_val[0] = q[0];
        mxq_idx[0] = 0;
        for (int i = 1; i < n; i++) {
            if (q[i] > mxq_val[i - 1]) {
                mxq_val[i] = q[i];
                mxq_idx[i] = i;
            } else {
                mxq_val[i] = mxq_val[i - 1];
                mxq_idx[i] = mxq_idx[i - 1];
            }
        }

        vi r(n);
        rep(i,0,n-1) {
            int mP= mxp_val[i];
            int idxP= mxp_idx[i];
            int mQ= mxq_val[i];
            int idxQ= mxq_idx[i];

            int M1, M2;
            if (mP > mQ) {
                M1= mP;
                M2 = q[i - idxP];
            }
            else if (mQ > mP) {
                M1 =mQ;
                M2 = p[i - idxQ];
            }
            else {
                M1 = mP;
                int cand1 = q[i - idxP];
                int cand2 = p[i - idxQ];
                M2 = max(cand1, cand2);
            }
            
            r[i] =ad_mod(pow2[M1], pow2[M2]);
        }
        rep(i, 0, n - 1) {
            cout << r[i] << " ";
        }
        cout << endl;


    }
    return 0;
}