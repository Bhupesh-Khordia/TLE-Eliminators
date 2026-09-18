#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(i == 0 || temp >= ans.back()) {
                ans.push_back(temp);
            } else {
                ans.push_back(temp);
                ans.push_back(temp);
            }
        }
        cout << ans.size() << endl;
        for(int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}