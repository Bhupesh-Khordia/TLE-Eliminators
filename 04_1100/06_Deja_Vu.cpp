// https://codeforces.com/problemset/problem/1891/B

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

        vector<ll> queries(q);
        for(ll i = 0; i < q; i++) {
            cin >> queries[i];
        }

        // For x to be divible by 2^y ... Right most y bits of x should be 0.
        // So if we add 2^(y-1) to x, then the y-1th bit from right of x will be 1 and hence it will not be divisible by >= 2^(y-1).
        // So we only perform query if it is less than the minimum of all previous queries. 
        
        ll mini = 31; // Hard maximum possible value
        for(ll i = 0; i < q; i++) {
            if(queries[i] >= mini) continue;

            ll power = 1LL << queries[i];
            for(int i = 0; i < n; i++) {
                if(arr[i]  % power == 0) {
                    arr[i] += power / 2;
                }
            }

            mini = queries[i];
        }

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // T.C. - O (q + 30 * n)
    }

    return 0;
}