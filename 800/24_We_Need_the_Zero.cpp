#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int totalXor = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            totalXor ^= temp;
        }
        if(n & 1) {
            cout << totalXor << endl;
        } else {
            if(totalXor == 0) {
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}