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
        
        int x;
        cin >> x;

        bool isPossible = true;
        vector<int> ans;
        if(x != 1) {
            for(int i = 0; i < n; i++) {
                ans.push_back(1);
            }
        } else {
            if(n == 1 || k == 1) isPossible = false;
            else if (k == 2) {
                if (n & 1) isPossible = false;
                else {
                    for(int i = 0; i < n / 2; i++) {
                        ans.push_back(2);
                    }
                }
            } else {
                if (n & 1) {
                    ans.push_back(3);
                    for(int i = 0; i < (n - 3) / 2; i++) {
                        ans.push_back(2);
                    }
                } else {
                    for(int i = 0; i < n / 2; i++) {
                        ans.push_back(2);
                    }
                }
            }
        }

        if(!isPossible) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << ans.size() << endl;
            for(int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}