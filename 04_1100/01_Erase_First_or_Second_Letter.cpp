// https://codeforces.com/problemset/problem/1917/B

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

        unordered_set<char> seen;
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            seen.insert(s[i]);
            ans += seen.size();
        }

        // For any consecutive ending substring, we can choose any character before it as starting point.
        cout << ans << endl;
    }
    return 0;
}