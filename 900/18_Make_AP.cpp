// https://codeforces.com/problemset/problem/1624/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b , c;
        cin >> a >> b >> c;

        // Try with a, b and change c
        int d = b - a;
        int nextTerm = b + d;
        if(nextTerm % c == 0 && nextTerm / c > 0) {
            cout << "YES" << endl;
            continue;
        }

        // Try with b, c and change a
        d = c - b;
        int prevTerm = b - d;
        if(prevTerm % a == 0 && prevTerm / a > 0) {
            cout << "YES" << endl;
            continue;
        }

        // Try with a, c and change b
        if((c - a) % 2 == 0) {
            int midTerm = (a + c) / 2;
            if(midTerm % b == 0 && midTerm / b > 0) {
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
    return 0;
}