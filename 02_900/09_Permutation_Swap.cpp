// https://codeforces.com/problemset/problem/1828/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int gcd = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            int diff = abs(temp - (i + 1));
            gcd = __gcd(gcd, diff);
        }
        
        cout << gcd << endl;
    }
    return 0;
}