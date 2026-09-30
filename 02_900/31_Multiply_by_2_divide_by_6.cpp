// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        long long powerOfTwo = 0;
        long long powerOfThree = 0;
        
        while (n >= 2 && n % 2 == 0) {
            powerOfTwo++;
            n /= 2;
        }
        
        while (n >= 3 && n % 3 == 0) {
            powerOfThree++;
            n /= 3;
        }
        
        // If n is not 1, it had other prime factors. 
        // Or, if we have more 2s than 3s, it's impossible.
        if (n != 1 || powerOfTwo > powerOfThree) {
            cout << -1 << "\n";
        } else {
            long long operations = 0;
            // Add missing 2s
            while (powerOfTwo < powerOfThree) {
                operations++;
                powerOfTwo++;
            }
            // Divide by 6 
            operations += powerOfThree;
            cout << operations << "\n";
        }
    }
    return 0;
}