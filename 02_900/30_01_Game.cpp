// https://codeforces.com/problemset/problem/1373/B

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
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                cntZero++;
            } else {
                cntOne++;
            }
        }
        if(min(cntZero, cntOne) & 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }
    return 0;
}