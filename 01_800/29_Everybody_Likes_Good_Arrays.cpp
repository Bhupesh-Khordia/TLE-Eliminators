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
        
        bool prevOdd = (arr[0] & 1);
        int ans = 0;
        for(int i = 1; i < n; i++) {
            bool currOdd = (arr[i] & 1);
            if(currOdd == prevOdd) {
                ans++;
            }
            prevOdd = currOdd;
        }
        cout << ans << endl;
    }
    return 0;
}