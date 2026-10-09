// https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ceilDiv(ll a, ll b) {
    return (a + b - 1) / b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        // needed sticks = (k * y) + (k - 1);
        // 1st trade - gain of x - 1 sticks

        ll firstTradeCnt = ceilDiv(((k * y) + (k - 1)), (x - 1));
        ll secondTradeCnt = k;
        cout << firstTradeCnt + secondTradeCnt << endl;
    }

    return 0;
}