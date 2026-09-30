// https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        char prev = s[0];
        int cnt = 0;
        for(int i = 1; i < s.length(); i++) {
            if(s[i] != prev) {
                if(prev == 'a') {
                    cnt++;
                } else {
                    cnt--;
                }
            }
            prev = s[i];
        }
        if(cnt != 0) {
            if(s[0] == 'a') {
                s[0] = 'b';
            } else {
                s[0] = 'a';
            }
        }
        cout << s << endl;
    }
    return 0;
}