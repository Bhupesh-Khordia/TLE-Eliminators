// https://codeforces.com/problemset/problem/1729/D

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

        vector<ll> arr1(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        vector<ll> arr2(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            arr[i] = arr2[i] - arr1[i];
        }

        sort(arr.begin(), arr.end());
        ll idx = lower_bound(arr.begin(), arr.end(), 0) - arr.begin();
        if(idx == n) {
            cout << 0 << "\n";
            continue;
        }

        if(idx == 0) {
            cout << n/2 << endl;
            continue;
        }
        ll ans = 0;
        ll leftIdx = idx - 1;
        while(idx < n) {
            if(leftIdx >= 0 && arr[idx] + arr[leftIdx] >= 0) {
                ans++;
                leftIdx--;
                idx++;
            }
            else {
                idx+=2;
                if(idx <= n) {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}