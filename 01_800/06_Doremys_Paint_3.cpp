#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        unordered_map<int, int> freq;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        if(freq.size() > 2) {
            cout << "No" << endl;
            continue;
        }else if (freq.size() == 2) {
            // cout << freq.begin()->first << " " << (++freq.begin())->first << endl;
            abs(freq.begin()->second - (++freq.begin())->second) <= 1 ? cout << "Yes" << endl : cout << "No" << endl;
        }else {
            cout << "Yes" << endl;
        }


    }
    return 0;
}