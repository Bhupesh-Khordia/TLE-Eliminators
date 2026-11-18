// https://codeforces.com/problemset/problem/1808/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> arr(n, vector<ll>(m));
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        vector<vector<ll>> transpose(m, vector<ll>(n));
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                transpose[j][i] = arr[i][j];
            }
        }

        ll ans = 0;
        for(ll i = 0; i < m; i++) {
            sort(transpose[i].begin(), transpose[i].end());
        }

        for(ll i = 0; i < m; i++) {
            ll sum = 0;
            for(ll j = 0; j < n; j++) {
                ans += j * transpose[i][j] - sum;
                sum += transpose[i][j];
            }
        }

        cout << ans << endl;
    }

    return 0;
}