// https://codeforces.com/problemset/problem/1842/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr1(n), arr2(n), arr3(n);
        for(ll i = 0; i < n; i++) cin >> arr1[i];
        for(ll i = 0; i < n; i++) cin >> arr2[i];
        for(ll i = 0; i < n; i++) cin >> arr3[i];

        ll curr = 0;
        
        for(int i = 0; i < n; i++) {
            if((arr1[i] | x) != x) break; // Has bits outside of x, stop stack
            curr |= arr1[i];
        }
        
        for(int i = 0; i < n; i++) {
            if((arr2[i] | x) != x) break; 
            curr |= arr2[i];
        }
        
        for(int i = 0; i < n; i++) {
            if((arr3[i] | x) != x) break; 
            curr |= arr3[i];
        }

        if(curr == x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}