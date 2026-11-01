// https://codeforces.com/problemset/problem/1731/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        // Diagonal elemets, one diagonal above the main diagonal 
        // Right, Down, Right, Down, Right, Down, ...

        // Sum of Squares + sum i = 1 to n - 1  (i * (i + 1))
        // 2 * sum of squares upto n - n^2 + sum upto n - 1

        // Simplifying - So that we can mod at each step and do multiplication once
        // n/6 [2(2 * n^2 + 3 * n + 1) - 6n + 3n - 3]
        // n(n + 1)(4n - 1)/6

        // To return = 2022 * n(n + 1)(4n - 1)/6 = 337 * n(n + 1)(4n - 1) % MOD

        ll ans = (337 * n) % MOD;
        ans = (ans * (n + 1)) % MOD;
        ans = (ans * (4 * n - 1)) % MOD;
        cout << ans << endl;
    }

    return 0;
}