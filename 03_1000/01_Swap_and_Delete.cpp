// https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int n = s.length();
        int cntZero = 0, cntOne = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '0') {
                cntZero++;
            } else {
                cntOne++;
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i - ans] == '0' && cntOne > 0) { // Using i - ans to track index of current t end in s
                cntOne--;
            } else if(s[i - ans] == '1' && cntZero > 0) {
                cntZero--;
            } else {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}