// https://codeforces.com/problemset/problem/1837/B

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
        
        int longest = 1;
        int current = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                current++;
                longest = max(longest, current);
            } else {
                current = 1;
            }
        }
        cout << longest + 1 << endl;
    }
    return 0;
}