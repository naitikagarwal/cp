#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m <= 2 * (n + 1) && (m >= n - 1))
    {
        int k = m - (n - 1);
        int flag = 0;
        while (n > 0 || k > 0)
        {
            if(flag==0 && k>0){
                cout<<1;
                k--;
                flag=1;
            }
            if(k>0){
               cout<<1;
               k--; 
            }
            
            if (n == 1)
            {
                cout << 0;
                n--;
                if (k != 0)
                {
                    for (int i = 0; i < k; i++){
                        cout << 1;
                        k--;
                    }
                }
            }
            else if(n>0){
                cout<<0<<1;
                n--;
            }
        }
    }
    else
    {
        cout << -1 << endl;
        return 0;
    }
}