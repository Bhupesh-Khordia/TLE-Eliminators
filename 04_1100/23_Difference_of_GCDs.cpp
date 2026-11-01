// https://codeforces.com/problemset/problem/1708/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        bool ans = true;
        for(int i = 1; i <= n; i++) {
            ll x = l / i;
            if(l % i != 0) x++;
            ll y = r / i;

            if(x > y) {
                ans = false;
                break;
            } else {
                a[i - 1] = x * i;
            }
        }
        if(!ans) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}