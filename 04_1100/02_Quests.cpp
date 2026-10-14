// https://codeforces.com/problemset/problem/1914/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr1(n);
        for(int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        vector<int> arr2(n);
        for(int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        
        int ans = 0;
        int sum = 0;
        int maxi = LLONG_MIN;
        for(int i = 0; i < min(n, k); i++) {
            // Complete i quests then repeat
            sum += arr1[i];
            maxi = max(maxi, arr2[i]);

            ans = max(ans, sum + maxi * (k - i - 1));
        }
        cout << ans << endl;
    }
    return 0;
}