// https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        if(n & 1) {
            cout << "YES" << endl;
        } else {
            if(n & n - 1) {
                // Not a perfect power of 2
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}