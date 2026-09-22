// https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        long long maxSum = n * (n + 1) / 2;
        if(x > maxSum) {
            cout << "NO" << endl;
            continue;
        }

        long long minKSum = k * (k + 1) / 2;
        long long maxKSum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2); // Sum of last k elements
        if(x < minKSum || x > maxKSum) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}