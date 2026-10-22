// https://codeforces.com/problemset/problem/1827/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

long long nCr(int n, int r) {
    // If r is greater than n, selection is impossible
    if (r > n || r < 0) return 0;
    
    // nCr(n, r) == nCr(n, n - r), optimize for fewer iterations
    if (r > n - r) r = n - r;
    
    long long res = 1;
    for (int i = 1; i <= r; ++i) {
        res *= (n - r + i);
        res /= i;
    }
    return res;
}

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

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        ll i = 0;
        ll placed = 0;
        ll ans = 1;

        while(i < n) {
            ll j = i;
            while(j < n && arr1[j] == arr1[i]) j++;
            ll count1 = j - i;
            
            ll idx = lower_bound(arr2.begin(), arr2.end(), arr1[i]) - arr2.begin();

            ll possible = idx - placed;
            if (possible < count1) {
                ans = 0;
                break;
            }

            ans = (ans * nCr(possible, count1) % MOD) % MOD;

            placed++;
            i++;
        }

        cout << ans << "\n";
    }

    return 0;
}