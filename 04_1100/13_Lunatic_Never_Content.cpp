// https://codeforces.com/problemset/problem/1826/B

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
        
        int i = 0, j = n - 1;
        vector<int> ans;
        while(i < j) {
            if(arr[i] != arr[j]) {
                // a1 = x * q1 + r
                // a2 = x * q2 + r
                // a1 - a2 = x * (q1 - q2)
                // for max x, minimize (q1 - q2) which can be min 1
                // so max possible x is abs(a1 - a2)
                ans.push_back(abs(arr[i] - arr[j]));
            }
            i++;
            j--;
        }

        if(ans.size() == 0) {
            cout << 0 << endl;
        } else if(ans.size() == 1) {
            cout << ans[0] << endl;
        } else {
            int gcd_value = __gcd(ans[0], ans[1]);
            for(int k = 2; k < ans.size(); k++) {
                gcd_value = __gcd(gcd_value, ans[k]);
            }
            cout << gcd_value << endl;
        }
    }
    return 0;
}