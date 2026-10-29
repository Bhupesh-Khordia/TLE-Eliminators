// https://codeforces.com/problemset/problem/1780/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long sum = accumulate(arr.begin(), arr.end(), 0LL);

        long long currSum = 0;
        long long ans = 1;
        // >2 number of segments can never be optimal
        for(int i = 0; i < n - 1; i++) {
            currSum += arr[i];
            ans = max(ans, __gcd(currSum, sum - currSum));
        }

        cout << ans << endl;
    }
    return 0;
}