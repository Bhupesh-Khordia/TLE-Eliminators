// https://codeforces.com/problemset/problem/1715/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll remainders = s - k * b;
        if(remainders < 0 || remainders > n * (k - 1)) {
            cout << -1 << endl;
            continue;
        }
        vector<ll> arr(n, 0);
        arr[0] = k * b;
        for(int i = 0; i < n && remainders > 0; i++) {
            ll add = min(remainders, k - 1);
            arr[i] += add;
            remainders -= add;
        }
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}