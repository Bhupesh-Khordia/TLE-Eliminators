// https://codeforces.com/problemset/problem/1673/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<int> freq(26, 0);
        
        // A string is only balanced if it has a pattern which repeats itself. And that pattern has no repeating char
        
        int patternLen = -1;
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] > 1) {
                patternLen = i;
                break;
            }
        }

        if(patternLen == -1) {
            cout << "YES" << endl;
            continue;
        }

        string pattern = s.substr(0, patternLen);
        int patternCount = n / patternLen;
        bool isBalanced = true;
        for(int i = 0; i < patternCount; i++) {
            if(s.substr(i * patternLen, patternLen) != pattern) {
                isBalanced = false;
                break;
            }
        }

        if(patternCount * patternLen != n) {
            for(int i = patternCount * patternLen; i < n; i++) {
                if(s[i] != pattern[i % patternLen]) {
                    isBalanced = false;
                    break;
                }
            }
        }
        if(isBalanced) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}