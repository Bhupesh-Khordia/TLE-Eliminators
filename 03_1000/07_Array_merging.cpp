// https://codeforces.com/problemset/problem/1831/B

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

        unordered_map<ll, pair<ll, ll>> mp; // max consecutive seq in arr1, arr2
        
        vector<ll> arr1(n);
        vector<ll> arr2(n);
        
        for(ll i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for(ll i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        ll i = 0;
        while(i < n) {
            ll num = arr1[i];
            ll cnt = 0;

            bool ipp = true;
            while(i < n && arr1[i] == num) {
                cnt++;
                i++;
                ipp = false;
            }

            if(mp.find(num) == mp.end()) {
                mp[num] = {cnt, 0};
            } else {
                mp[num].first = max(mp[num].first, cnt);
            }

            if(ipp) {
                i++;
            }
        }
        i = 0;
        while(i < n) {
            ll num = arr2[i];
            ll cnt = 0;

            bool ipp = true;
            while(i < n && arr2[i] == num) {
                cnt++;
                i++;
                ipp = false;
            }

            if(mp.find(num) == mp.end()) {
                mp[num] = {0, cnt};
            } else {
                mp[num].second = max(mp[num].second, cnt);
            }

            if(ipp) {
                i++;
            }
        }
        
        ll ans = 0;
        for(auto it : mp) {
            ans = max(ans, it.second.first + it.second.second);
        }
        cout << ans << endl;
    }

    return 0;
}