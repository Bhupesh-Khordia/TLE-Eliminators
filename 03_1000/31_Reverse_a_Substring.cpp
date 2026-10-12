// https://codeforces.com/problemset/problem/1155/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());
    if(s == sorted_s) {
        cout << "NO" << endl;
    } else {
        char maxChar = s[0];
        int idx1 = 0;
        int idx2 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] < maxChar) {
                idx2 = i;
                cout << "YES" << endl;
                break;
            } else {
                maxChar = s[i];
                idx1 = i;
            }
        }

        cout << idx1 + 1 << " " << idx2 + 1 << endl;
    }
    return 0;
}