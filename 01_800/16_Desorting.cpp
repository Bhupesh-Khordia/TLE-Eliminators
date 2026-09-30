#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int minDiff = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i > 0) {
                minDiff = min(minDiff, arr[i] - arr[i - 1]);
            }
        }

        if(minDiff < 0) {
            cout << 0 << endl;
        } else if (minDiff == 0) {
            cout << 1 << endl;
        } else {
            cout << (minDiff + 2) / 2 << endl;
        }
        
    }
    return 0;
}