// https://codeforces.com/problemset/problem/1883/C

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
        // 2 ≤ k ≤ 5

        ll ans = INT_MAX;

        vector<ll> arr(n);
        ll evenCnt = 0;
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
            evenCnt += !(arr[i] & 1);
            if(arr[i] % k == 0) {
                ans = 0;
            } else {
                ans = min(ans, k - (arr[i] % k));
            }
        }

        if(k == 4 && n > 1) {
            if(evenCnt > 1) {
                ans = 0;
            } else if(evenCnt == 1) {
                ans = min(ans, 1LL);
            } else {
                ans = min(ans, 2LL);
            }
        }

        cout << ans << endl;
    }

    return 0;
}