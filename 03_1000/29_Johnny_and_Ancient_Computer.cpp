// https://codeforces.com/problemset/problem/1362/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll a, ll b) {
    if(a == b) {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    while(a % 8 == 0 && a / 8 >= b) {
        a /= 8;
        ans++;
    }

    while(a % 4 == 0 && a / 4 >= b) {
        a /= 4;
        ans++;
    }

    while(a % 2 == 0 && a / 2 >= b) {
        a /= 2;
        ans++;
    }

    if(a == b) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;

        if(a > b) solve(a, b);
        else solve(b, a);
    }

    return 0;
}