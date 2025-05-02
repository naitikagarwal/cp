#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // const int SIZE = 500;

    int n,k;
    cin >> n;
    cin >> k;
    cin.ignore(); 
    
    vector<int> a(k, 0);
    
    char str[n + 1]; 
    cin.getline(str, n + 1);
    for(char i= 'A'; i < 'A' + k; i++){
        for(int j=0; j<n; j++){
            if(str[j] == i){
                a[i - 'A']++;
            }
        }
    }
    
    int min = *min_element(a.begin(), a.end());
    cout << min*k << endl;
}