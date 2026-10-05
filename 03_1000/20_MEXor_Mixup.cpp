// https://codeforces.com/problemset/problem/1567/B

#include <bits/stdc++.h>
using namespace std;

int computeXOR1ToN(int n) {
    int rem = n % 4;
    
    if (rem == 0) return n;
    if (rem == 1) return 1;
    if (rem == 2) return n + 1;
    return 0; // rem == 3
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int i = 0;
        // Find xor from 0 to a - 1
        /*
        int xori = 0;
        while(i < a) {
            xori ^= i;
            i++;
        }
        */

        int xori = computeXOR1ToN(a - 1);

        int xorb = xori ^ b;
        if(xorb == 0) {
            cout << a << endl;
        } else if(xorb == a) {
            cout << a + 2 << endl;
        } else {
            cout << a + 1 << endl;
        }
    }
    return 0;
}