// https://codeforces.com/problemset/problem/1675/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        if(n > 1 && arr[n - 1] == 0) {
            cout << -1 << endl;
            continue;
        }

        long long operations = 0;
        for(int i = n - 2; i >= 0; i--) {
            while(arr[i] >= arr[i + 1]) {
                arr[i] /= 2;
                operations++;
            }
            if(i != 0 && arr[i] == 0) {
                operations = -1;
                break;
            }
        }

        cout << operations << endl;
    }
    return 0;
}