// https://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        // To minimize lcm(a, b) for a + b = n, we want b % a = 0... (Considering upper half where b >= a)
        // (n - a) % a = 0 => n % a + (-a % a) = 0 => n % a = 0 => a is a divisor of n
        // Sincle lcm = b, we want to maximize a, to minimize b... .So we want largest divisor of n that is less than or equal to n/2

        ll ansA = 1;
        ll ansB = n - 1;
        // For prime numbers, the answer is always 1 and n-1, since they have no other divisors.
        for(ll fac = 2; fac * fac <= n; fac++) {
            if(n % fac == 0) {
                ansA = n / fac;
                ansB = n - ansA;
                break;
            }
        }

        cout << ansA << " " << ansB << endl;
    }

    return 0;
}