// https://codeforces.com/problemset/problem/1474/B

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long d;
        cin >> d;
        
        // First divisor = 1
        long long p = 1 + d; 
        // Second divisor = Prime >= 1 + d ... If we take composite then its divisor will be something less than 1 + d So difference is not satisfied
        while(!is_prime(p)) {
            p++;
        }

        // Third divisor = either prime ^ 2 or smalles prime >= p + d, not composite for same reason as above
        long long option1 = p * p * p;

        long long q = p + d;
        while(!is_prime(q)) {
            q++;
        }
        long long option2 = p * q;

        // Fourth divisor = number itself
        cout << min(option1, option2) << endl;

        // Use sieve for better TC
    }
    return 0;
}