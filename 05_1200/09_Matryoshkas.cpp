// https://codeforces.com/problemset/problem/1790/D

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

        map<ll, ll> freq;
        for(ll i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        ll ans = 0;
        while(!freq.empty()) {
            ll first = freq.begin()->first;
            freq[first]--;
            if(freq[first] == 0) {
                freq.erase(first);
            }

            while(freq.find(first + 1) != freq.end()) {
                first++;
                freq[first]--;
                if(freq[first] == 0) {
                    freq.erase(first);
                }
            }
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}