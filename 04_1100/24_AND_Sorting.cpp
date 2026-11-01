// https://codeforces.com/problemset/problem/1682/B

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

        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        
        int and_result = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(arr[i] != sorted_arr[i]) {
                and_result &= arr[i];
            }
        }
        cout << and_result << endl;
    }
    return 0;
}