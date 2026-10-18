// https://codeforces.com/problemset/problem/1873/E

#include <bits/stdc++.h>
using namespace std;

bool fills(vector<int>& arr, int n, int x, int mid) {
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += (mid - arr[i] > 0) ? (mid - arr[i]) : 0;
    }
    return sum <= x;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int l = 0, r = min(arr[0], arr[n-1]) + x;
        int ans = 0;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(fills(arr, n, x, mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}