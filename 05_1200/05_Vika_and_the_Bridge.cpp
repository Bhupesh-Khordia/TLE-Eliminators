// https://codeforces.com/problemset/problem/1848/B

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

        vector<vector<ll>> indices(k + 1); // To store indices of each color
        for(ll i = 0; i < n; i++) {
            indices[arr[i]].push_back(i);
        }

        ll ans = n - 1; 
        for(ll color = 1; color <= k; color++) {
            if (indices[color].empty()) continue; // IMP
            ll maxDist = 0;
            ll secondMaxDist = 0;
            for(ll i = 0; i < indices[color].size(); i++) {
                ll dist = indices[color][i] - (i > 0 ? indices[color][i - 1] : -1) - 1;
                if(dist > maxDist) {
                    secondMaxDist = maxDist;
                    maxDist = dist;
                } else if(dist > secondMaxDist) {
                    secondMaxDist = dist;
                }
            }
            // Right boundary
            ll dist = n - indices[color][indices[color].size() - 1] - 1;
            if(dist > maxDist) {
                secondMaxDist = maxDist;
                maxDist = dist;
            } else if(dist > secondMaxDist) {
                secondMaxDist = dist;
            }

            
            ll maxi = max(maxDist / 2, secondMaxDist);
            ans = min(ans, maxi);
        }

        cout << ans << endl;
    }

    return 0;
}