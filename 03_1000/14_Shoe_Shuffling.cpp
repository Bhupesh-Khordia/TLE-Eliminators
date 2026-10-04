// https://codeforces.com/problemset/problem/1691/B

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

        ll l = 0;
        vector<ll> p(n);
        bool ansDone = false;
        while(l < n) {
            ll r = l;
            // boundary of the current group of same shoe sizes
            while(r + 1 < n && arr[r + 1] == arr[l]) {
                r++;
            }
            
            // Freq = 1 -> Impossible
            if(l == r) {
                cout << -1 << "\n";
                ansDone = true;
                break;
            }
            
            // Cycle the indices for this group (1-based indexing)
            for(ll i = l; i < r; i++) {
                p[i] = i + 2; 
            }
            p[r] = l + 1;
            
            l = r + 1;
        }
        
        if(!ansDone) {
            for(ll i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}