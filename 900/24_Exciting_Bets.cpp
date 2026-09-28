// https://codeforces.com/problemset/problem/1543/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;

        long long maxPossibleGCD = abs(b - a);
        long long operationsNeeded = 0;
        if(maxPossibleGCD != 0) {
            operationsNeeded = min(a % maxPossibleGCD, maxPossibleGCD - (a % maxPossibleGCD));
        }
        
        cout << maxPossibleGCD << " " << operationsNeeded << endl;
    }
    return 0;
}