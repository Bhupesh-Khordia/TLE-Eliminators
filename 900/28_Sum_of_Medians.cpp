// https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        vector<long long> arr(n * k);
        for(long long i = 0; i < n * k; i++) {
            cin >> arr[i];
        }
        
        long long i = n * k;
        long long ans = 0;
        while(k--) {
            i -= n / 2 + 1;
            ans += arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}