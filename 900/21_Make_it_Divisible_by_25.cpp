// https://codeforces.com/problemset/problem/1593/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        // We want it ending with 00, 25, 50, or 75
        bool zero = false, five = false;
        long long cnt = 0;
        while(n > 0) {
            int digit = n % 10;
            if(zero) {
                if(digit == 0 || digit == 5) {
                    cout << cnt - 1 << endl;
                    break;
                }
            } 
            if(five) {
                if(digit == 2 || digit == 7) {
                    cout << cnt - 1 << endl;
                    break;
                }
            }
            if(digit == 0) zero = true;
            if(digit == 5) five = true;
            n /= 10;
            cnt++;
        }
        
    }
    return 0;
}