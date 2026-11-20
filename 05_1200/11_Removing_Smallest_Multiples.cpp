// https://codeforces.com/problemset/problem/1734/C

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

        string s;
        cin >> s;

        vector<int> cost(n + 1, 0);
        for (int k = 1; k <= n; k++) {
            for (int m = k; m <= n; m += k) {
                if (s[m - 1] == '1') break;
                if (cost[m] == 0) cost[m] = k;
            }
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++) ans += cost[i];
        cout << ans << "\n";
    }

    return 0;
}