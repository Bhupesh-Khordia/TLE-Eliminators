// https://codeforces.com/problemset/problem/1791/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        vector<int> distinct(n, 0);
        unordered_set<char> seen;
        for(int i = 0; i < n; i++) {
            seen.insert(s[i]);
            distinct[i] = seen.size();
        }

        seen.clear();
        int ans = 1;
        for(int i = n - 1; i >= 0; i--) {
            seen.insert(s[i]);
            if(i > 0) {
                ans = max(ans, distinct[i - 1] + (int)seen.size());
            }
        }
        cout << ans << endl;
    }
    return 0;
}