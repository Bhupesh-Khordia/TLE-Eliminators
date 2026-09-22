// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        int total = 0;
        unordered_map<char, int> freq;
        for(int i = 0; i < n; i++) {
            if(freq.find(s[i]) == freq.end()) {
                freq[s[i]] = 1;
                total++;
            } else {
                freq[s[i]]--;
                total--;
            }
            if(freq[s[i]] == 0) {
                freq.erase(s[i]);
            }
        }

        bool ans;
        if((n - k) & 1) {
            if(total >= k) {
                ans = (total - k) == 1;
            } else {
                ans = true;
            }
        } else {
            if(total >= k) {
                ans = (total == k);
            } else {
                ans = true;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}