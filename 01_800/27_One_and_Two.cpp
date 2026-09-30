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
        
        int cntTwo = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) {
                cntTwo++;
            }
        }

        if(cntTwo % 2 != 0) {
            cout << -1 << endl;
        } else {
            cntTwo /= 2;
            for(int i = 0; i < n; i++) {
                if(arr[i] == 2) {
                    cntTwo--;
                }
                if(cntTwo == 0) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}