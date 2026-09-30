// https://codeforces.com/problemset/problem/1537/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;

        // Farthest corner from (i, j) is either (1, 1), (1, m), (n, 1), or (n, m)
        long long x = (i - 1 > n - i) ? 1 : n;
        long long y = (j - 1 > m - j) ? 1 : m;

        // Diagonally opposite corner
        long long x2 = (x == 1) ? n : 1;
        long long y2 = (y == 1) ? m : 1;

        cout << x << " " << y << " " << x2 << " " << y2 << endl;
    }
    return 0;
}