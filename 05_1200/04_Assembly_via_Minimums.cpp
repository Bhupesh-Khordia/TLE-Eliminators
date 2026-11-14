// https://codeforces.com/problemset/problem/1857/C

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

        ll sizeB = n * (n - 1) / 2;
        vector<ll> b(sizeB);
        for(ll i = 0; i < sizeB; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());
        vector<ll> a;
        ll toPlus = n - 1;

        int i = 0;
        while (i < sizeB) {
            a.push_back(b[i]);
            i += toPlus;
            toPlus--;
        }
        a.push_back(b[sizeB - 1]);

        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}