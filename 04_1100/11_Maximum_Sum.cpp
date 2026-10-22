// https://codeforces.com/problemset/problem/1832/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());

        vector<long long> preSum(n);
        preSum[0] = arr[0];
        for(long long i = 1; i < n; i++) preSum[i] = preSum[i - 1] + arr[i];



        // m = number of times action 2 is performed as operation
        long long ans = 0;
        for(long long m = 0; m < k; m++) ans = max(ans, preSum[n - m - 1] - preSum[2 * (k - m) - 1]);

        cout << max(ans, preSum[n - k - 1]) << endl;
    }
    return 0;
}