// https://codeforces.com/problemset/problem/1899/B

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

        vector<ll> prefixSum(n);
        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            sum += temp;
            prefixSum[i] = sum;
        }

        vector<ll> divisorsOfN;
        for(ll i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                divisorsOfN.push_back(i);
                if(i != n / i) {
                    divisorsOfN.push_back(n / i);
                }
            }
        }

        ll ans = LLONG_MIN;
        for(auto div : divisorsOfN) {
            ll mini = LLONG_MAX;
            ll maxi = LLONG_MIN;
            for(ll i = div - 1; i < n; i += div) {
                ll segmentSum = prefixSum[i] - (i >= div ? prefixSum[i - div] : 0);
                mini = min(mini, segmentSum);
                maxi = max(maxi, segmentSum);
            }
            ans = max(ans, abs(maxi - mini));
        }

        cout << ans << endl;
    }

    return 0;
}