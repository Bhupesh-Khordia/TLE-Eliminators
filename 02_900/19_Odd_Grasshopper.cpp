// https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, d;
        cin >> x >> d;
        
        // If x is even say 0
        // 1 in left -> -1
        // 2 in right -> 1
        // 3 in right -> 4
        // 4 in left -> 0
        // Cycle continues
        
        int mod = d % 4;
        switch (mod)
        {
        case 0:
            cout << x << endl;
            break;
        case 1:
            if(x & 1) cout << x + d << endl;
            else cout << x - d << endl;
            break;
        case 2:
            if(x & 1) cout << x - 1 << endl;
            else cout << x + 1 << endl;
            break;
        case 3:
            if(x & 1) cout << x - 1 - d << endl;
            else cout << x + 1 + d << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}