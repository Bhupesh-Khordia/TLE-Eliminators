// https://codeforces.com/problemset/problem/1876/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

static bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, p, ans = 0;
        cin >> n >> p;

        vector<pair<ll, ll>> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i].first;
        }
        for(ll i = 0; i < n; i++) {
            cin >> arr[i].second;
        }

        sort(arr.begin(), arr.end(), cmp);

        if(p < arr[0].second) {
            cout << p * n << endl;
            continue;
        }

        n -= 1;
        ans += p;
        int i = 0;
        while(n) {
            if(arr[i].second > p) {
                ans += n * p;
                break;
            }
            if(arr[i].first >= n) {
                ans += n * arr[i].second;
                n = 0;
                i++;
            } else {
                ans += arr[i].first * arr[i].second;
                n -= arr[i].first;
                i++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}