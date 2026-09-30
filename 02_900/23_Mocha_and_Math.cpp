// https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        long long mask = ~0LL;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            // Check which bit positions can be made 0
            cin >> arr[i];
            mask &= arr[i];
        }
        
        cout << mask << endl;
    }
    return 0;
}