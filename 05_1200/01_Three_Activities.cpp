// https://codeforces.com/problemset/problem/1914/D

#include <bits/stdc++.h>
using namespace std;

#define ll long long

static bool cmp (pair<ll, ll> a, pair<ll, ll> b) {
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> arr1;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            arr1.push_back({temp, i});
        }
        vector<pair<ll, ll>> arr2;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            arr2.push_back({temp, i});
        }
        vector<pair<ll, ll>> arr3;
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            arr3.push_back({temp, i});
        }

        sort(arr1.begin(), arr1.end(), cmp);
        sort(arr2.begin(), arr2.end(), cmp);
        sort(arr3.begin(), arr3.end(), cmp);

        vector<ll> max1;
        vector<ll> max2;
        vector<ll> max3;

        for(int i = 0; i < 3; i++) {
            max1.push_back(arr1[i].second);
            max2.push_back(arr2[i].second);
            max3.push_back(arr3[i].second);
        }

        ll ans = 0;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {
                    if(max1[i] != max2[j] && max2[j] != max3[k] && max1[i] != max3[k]) {
                        ans = max(ans, arr1[i].first + arr2[j].first + arr3[k].first);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}