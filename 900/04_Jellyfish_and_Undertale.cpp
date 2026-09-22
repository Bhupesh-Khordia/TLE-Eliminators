// https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        
        long long sum = 0;
        for(long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            sum += min(temp, a - 1);
        }
        
        cout << b + sum << endl;
    }
    return 0;
}