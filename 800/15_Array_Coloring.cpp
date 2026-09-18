#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        // vector<int> arr(n);
        int oddCnt = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(temp & 1) {
                oddCnt++;
            }
        }
        
        if (oddCnt & 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}