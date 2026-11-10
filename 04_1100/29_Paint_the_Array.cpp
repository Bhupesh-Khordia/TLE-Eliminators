// https://codeforces.com/problemset/problem/1618/C

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
 
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        ll gcd1 = a[0]; 
        ll gcd2 = a[1];
        for (int i = 2; i < n; i++) {
            if(i & 1) {
                gcd2 = __gcd(gcd2, a[i]);
            } else {
                gcd1 = __gcd(gcd1, a[i]);
            }
        }
 
        bool ok1 = true, ok2 = true;
        for (int i = 0; i < n; i++) {
            if(i & 1) {
                if(a[i] % gcd1 == 0) {
                    ok1 = false;
                }
            } else {
                if(a[i] % gcd2 == 0) {
                    ok2 = false;
                }
            }
        }
 
        if(ok1) {
            cout << gcd1 << "\n";
        } else if(ok2) {
            cout << gcd2 << "\n";
        } else {
            cout << 0 << "\n";
        }
 
    }
 
    return 0;
}