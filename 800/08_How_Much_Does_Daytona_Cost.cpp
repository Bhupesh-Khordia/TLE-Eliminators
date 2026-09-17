#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int k;
        cin >> k;
        
        bool present = false;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == k) {
                present = true;
            }
        }
        
        if(present) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}