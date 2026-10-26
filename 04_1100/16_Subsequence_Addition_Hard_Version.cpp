// https://codeforces.com/problemset/problem/1807/G2

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
        
        sort(arr.begin(), arr.end());

        if(arr[0] != 1) {
            cout << "NO" << endl;
            continue;
        }

        long long sum = arr[0];

        bool output = false;
        for(int i = 1; i < n; i++) {
            if(arr[i] > sum) {
                cout << "NO" << endl;
                output = true;
                break;
            }
            sum += arr[i];
        }
        if(!output) {
            cout << "YES" << endl;
        }
    }
    return 0;
}