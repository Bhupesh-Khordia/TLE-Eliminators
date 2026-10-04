// https://codeforces.com/problemset/problem/1704/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll changes = 0;
        ll rangeMin = arr[0] - x, rangeMax = arr[0] + x;

        for(ll i = 1; i < n; i++) {
            ll newMin = arr[i] - x, newMax = arr[i] + x;
            if(newMax < rangeMin || newMin > rangeMax) {
                changes++;
                rangeMin = newMin;
                rangeMax = newMax;
            } else {
                rangeMin = max(rangeMin, newMin);
                rangeMax = min(rangeMax, newMax);
            }
        }

        cout << changes << endl;

    }

    return 0;
}