// https://codeforces.com/problemset/problem/1666/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;

        vector<int> need(26, 0);

        for (char c : t) {
            need[c - 'A']++;
        }

        int j = t.size() - 1;
        bool possible = true;

        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];

            if (j >= 0 && c == t[j]) {
                // Keep this character
                need[c - 'A']--;
                j--;
            }
            else {
                // We want to delete this character.
                if (need[c - 'A'] > 0) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible && j < 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}