#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        int maxi = -1;
        unordered_set<int> indices;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > maxi) {
                maxi = arr[i];
                indices.clear();
                indices.insert(i);
            } else if(arr[i] == maxi) {
                indices.insert(i);
            }
        }
        
        vector<int> b, c;
        for(int i = 0; i < n; i++) {
            if(indices.find(i) != indices.end()) {
                c.push_back(arr[i]);
            } else {
                b.push_back(arr[i]);
            }
        }
        if(b.size() == 0 || c.size() == 0) {
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;
        for(int x : b) {
            cout << x << " ";
        }
        cout << endl;
        for(int x : c) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}