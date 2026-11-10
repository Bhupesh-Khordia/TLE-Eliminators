// https://codeforces.com/problemset/problem/1511/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> first_pos(51, n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (first_pos[x] == n + 1) {
            first_pos[x] = i;
        }
    }

    while (q--) {
        int x;
        cin >> x;

        int ans = first_pos[x];

        for (int i = 1; i <= 50; i++) {
            if (first_pos[i] < ans) {
                first_pos[i]++;
            }
        }

        first_pos[x] = 1;

        cout << ans << " ";
    }

    cout << '\n';

    return 0;
}