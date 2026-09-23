// https://codeforces.com/problemset/problem/1726/A

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

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        // Option 1 - rotate whole array by some steps 
        // Option 2 - Keep leftmost or rightmost same and rotate rest to get best option

        int ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            int left = arr[i];
            int right = arr[(i + 1) % n];
            ans = max(ans, left - right);
        }

        int leftMost = arr[0];
        int rightMost = arr[n - 1];
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 1; i < n; i++) {
            if(i < n - 1) {
                mini = min(mini, arr[i]);
            }
            if(i > 0) {
                maxi = max(maxi, arr[i]);
            }
        }
        ans = max(ans, rightMost - mini);
        ans = max(ans, maxi - leftMost);
        cout << ans << endl;
    }
    return 0;
}