#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int x=0;
    while (t--){
        string str;
        cin >> str;
        if (str.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}