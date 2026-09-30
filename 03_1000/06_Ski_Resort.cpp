// https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll ans = 0;
        ll i = 0;
        while(i < n) {
            ll lenOfWindow = 0;
            bool ipp = true;
            while(i < n && arr[i] <= q) {
                i++;
                lenOfWindow++;
                ipp = false;
            }
            if(lenOfWindow >= k) {
                // sum of 1, 2, 3, ..., lenOfWindow - k + 1
                // Subarrays ending at kth position, k+1th position, ..., lenOfWindowth position
                ans += (lenOfWindow - k + 1) * (lenOfWindow - k + 2) / 2;
            }

            if(ipp) {
                i++;
            }
        }

        cout << ans << endl;

    }

    return 0;
}