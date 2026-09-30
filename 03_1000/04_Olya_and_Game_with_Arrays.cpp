// https://codeforces.com/problemset/problem/1859/B

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

        vector<pair<ll, ll>> mini(n); // First mini, Second mini
        for(ll j = 0; j < n; j++) {
            ll x;
            cin >> x;

            vector<ll> arr(x);
            ll miniOne = LLONG_MAX, miniTwo = LLONG_MAX;
            for(ll i = 0; i < x; i++) {
                cin >> arr[i];
                if(arr[i] < miniOne) {
                    miniTwo = miniOne;
                    miniOne = arr[i];
                } else if(arr[i] < miniTwo) {
                    miniTwo = arr[i];
                }
            }
            mini[j] = {miniOne, miniTwo};
        }

        // Pick first mini of all arrays and put them in that array which has least second mini
        sort(mini.begin(), mini.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
            return a.second < b.second;
        });

        ll ans = 0;
        ll miniAll = mini[0].first;
        for(ll i = 1; i < n; i++) {
            ans += mini[i].second;
            miniAll = min(miniAll, mini[i].first);
        }
        ans += miniAll;

        cout << ans << endl;
    }

    return 0;
}   