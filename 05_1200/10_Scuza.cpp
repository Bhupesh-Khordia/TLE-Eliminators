// https://codeforces.com/problemset/problem/1742/E

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<ll> query(q);
        for(ll i = 0; i < q; i++) {
            cin >> query[i];
        }

        vector<ll> prefMax(n);
        prefMax[0] = arr[0];
        for(ll i = 1; i < n; i++) {
            prefMax[i] = max(prefMax[i - 1], arr[i]);
        }

        vector<ll> prefSum(n);
        prefSum[0] = arr[0];
        for(ll i = 1; i < n; i++) {
            prefSum[i] = prefSum[i - 1] + arr[i];
        }

        for(ll i = 0; i < q; i++) {
            ll idx = upper_bound(prefMax.begin(), prefMax.end(), query[i]) - prefMax.begin();
            if(idx < n) {
                if(idx > 0) {
                    cout << prefSum[idx - 1] << " ";
                } else {
                    cout << 0 << " ";
                }
            } else {
                cout << prefSum.back() << " ";
            }
        }
        cout << endl;
    }

    return 0;
}