#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            ans[i] = n + 1 - temp;
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}