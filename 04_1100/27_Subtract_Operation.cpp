// https://codeforces.com/problemset/problem/1656/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        set<ll> unique_elements(arr.begin(), arr.end());

        bool ans = false;
        for(int i = 0; i < n; i++) {
            if(unique_elements.count(arr[i] - k)) {
                ans = true;
                break;
            }
        }

        if(ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}