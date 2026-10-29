// https://codeforces.com/problemset/problem/1791/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int mini = INT_MAX;
        int negative_count = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            mini = min(mini, abs(arr[i]));
            negative_count += (arr[i] < 0);
            sum += abs(arr[i]);
        }
        
        if(negative_count % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - 2 * mini << endl;
        }
    }
    return 0;
}