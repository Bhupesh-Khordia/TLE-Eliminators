// https://codeforces.com/problemset/problem/1909/B

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

        ll curr = 2;
        while(true) {
            set<ll> s;
            for(ll i = 0; i < n; i++) {
                s.insert(arr[i] % curr);
            }
            if(s.size() == 2) {
                cout << curr << endl;
                break;
            }
            curr = curr * 2;
        }
    }

    return 0;
}