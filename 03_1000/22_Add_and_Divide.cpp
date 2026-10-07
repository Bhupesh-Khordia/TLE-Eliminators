// https://codeforces.com/problemset/problem/1485/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int logbaseb(ll a) {
    return (int)(log(a) / log(2));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll operations = LLONG_MAX;
        for(int additions = 0; additions <= 31; additions++) {
            ll current_b = b + additions;
            if(current_b == 1) continue; // Avoid division by 1

            ll temp_a = a;
            ll divisions = 0;
            while(temp_a > 0) {
                temp_a /= current_b;
                divisions++;
            }

            operations = min(operations, additions + divisions);
        }
        cout << operations << endl;
    }

    return 0;
}