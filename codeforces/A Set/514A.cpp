#include <bits/stdc++.h>
using namespace std;

long long fun(long long n){
    if(n == 0) return 0;
    long long lastDigit = n % 10;
    long long inverted = (lastDigit >= 5) ? (9 - lastDigit) : lastDigit;

    // Avoid leading zero
    if (n < 10 && inverted == 0) inverted = lastDigit;

    return inverted + 10 * fun(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
