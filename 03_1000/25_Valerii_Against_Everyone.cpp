// https://codeforces.com/problemset/problem/1438/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        unordered_set<ll> arr;
        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            arr.insert(x);
        }

        if(arr.size() < n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}