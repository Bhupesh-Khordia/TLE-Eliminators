// https://codeforces.com/problemset/problem/1872/D

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll g = __gcd(x, y);
        ll commonMultiplesCnt = 0;
        
        // Only calculate LCM if it can be less than or equal to 'n' otherwise no common multiples
        if (x / g <= n / y) { 
            ll lcm = (x / g) * y; // lcm * hcf = x * y
            commonMultiplesCnt = n / lcm;
        }

        ll uniqueXMultiplesCnt = (n / x) - commonMultiplesCnt;
        ll uniqueYMultiplesCnt = (n / y) - commonMultiplesCnt;

        // (n) + (n-1) + ... + (n - k + 1)
        ll k = uniqueXMultiplesCnt;
        ll firstTerm = k * (2 * n - k + 1) / 2;

        // 1 + 2 + ... + m
        ll m = uniqueYMultiplesCnt;
        ll secondTerm = m * (m + 1) / 2;

        cout << firstTerm - secondTerm << endl;
    }

    return 0;
}