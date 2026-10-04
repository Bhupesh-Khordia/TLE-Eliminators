// https://codeforces.com/problemset/problem/1690/D

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

        int whiteCnt = 0;
        int i = 0;
        while(k-- && i < n) {
            if(s[i] == 'W') {
                whiteCnt++;
            }
            i++;
        }

        int ans = whiteCnt;
        for(int j = i; j < n; j++) {
            if(s[j] == 'W') {
                whiteCnt++;
            }
            if(s[j - i] == 'W') {
                whiteCnt--;
            }
            ans = min(ans, whiteCnt);
        }

        cout << ans << endl;
    }
    return 0;
}