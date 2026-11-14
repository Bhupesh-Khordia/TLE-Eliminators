// https://codeforces.com/problemset/problem/1832/C

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

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        if(n == 2) {
            cout << ((arr[0] == arr[1]) ? 1 : 2) << endl;
            continue;
        }

        ll ans = n;
        ll i = 1;
        ll left = arr[0];
        while(i < n - 1) {
            if((arr[i] >= left && arr[i] <= arr[i + 1]) || (arr[i] <= left && arr[i] >= arr[i + 1])) {
                // We can delete i
                ans--;
            } else {
                left = arr[i];
            }
            i++;
        }
        if(arr[n - 1] == left) {
            ans--;
        }

        cout << ans << endl;
    }

    return 0;
}