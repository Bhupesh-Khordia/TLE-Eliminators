// https://codeforces.com/problemset/problem/1899/C

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
        
        int ans = *max_element(arr.begin(), arr.end());
        int currSum = arr[0] < 0 ? 0 : arr[0];
        for(int i = 1; i < n; i++) {
            if((arr[i] & 1) != (arr[i - 1] & 1)) {
                currSum += arr[i];
                ans = max(ans, currSum);
            } else {
                currSum = arr[i];
                ans = max(ans, currSum);
            }

            if(currSum < 0) {
                currSum = 0;
            }
        }   

        cout << ans << endl;
    }
    return 0;
}