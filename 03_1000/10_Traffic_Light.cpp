// https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char ch;
        cin >> ch;
        
        string s;
        cin >> s;

        int greenIdx = s.find("g"); // First green
        int ans = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'g') {
                greenIdx = i;
            }

            if(s[i] == ch) {
                if(greenIdx < i) {
                    ans = max(ans, n - i + greenIdx);
                } else {
                    ans = max(ans, greenIdx - i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}