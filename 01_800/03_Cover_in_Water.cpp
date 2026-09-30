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

        int dotCount = 0;
        bool threeConsecutiveDots = false;
        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {
                dotCount++;
                if(dotCount >= 3) {
                    if(s[i - 1] == '.' && s[i - 2] == '.') {
                        threeConsecutiveDots = true;
                        break;
                    }
                }
            }
        }
        if(threeConsecutiveDots) {
            cout << 2 << endl;
        } else {
            cout << dotCount << endl;
        }
    }
}