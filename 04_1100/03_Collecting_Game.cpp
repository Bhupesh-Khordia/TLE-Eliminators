// https://codeforces.com/problemset/problem/1904/B

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

        vector<pair<ll, ll>> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end());

        vector<ll> prefixSum(n);
        for(ll i = 0; i < n; i++) {
            prefixSum[i] = arr[i].first + (i > 0 ? prefixSum[i - 1] : 0);
        }

        vector<ll> reach(n);
        reach[n - 1] = n - 1;
        
        for(ll i = n - 2; i >= 0; i--) {
            if(prefixSum[i] >= arr[i + 1].first) {
                // Yes: We can reach whatever the next guy can reach
                reach[i] = reach[i + 1];
            } else {
                // No: We are blocked. We can only reach up to our current index
                reach[i] = i;
            }
        }

        vector<ll> finalAns(n);
        for(ll i = 0; i < n; i++) {
            finalAns[arr[i].second] = reach[i];
        }

        for(ll i = 0; i < n; i++) {
            cout << finalAns[i] << " ";
        }
        cout << endl;
    }

    return 0;
}