// https://codeforces.com/problemset/problem/1669/F

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
        long long leftSum = 0, rightSum = 0;
        int ans = 0;
        while(i <= j) {
            if(leftSum < rightSum) {
                leftSum += arr[i];
                i++;
                if(leftSum == rightSum) {
                    ans = i + (n - j - 1);
                }
            } else {
                rightSum += arr[j];
                j--;
                if(leftSum == rightSum) {
                    ans = i + (n - j - 1);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}