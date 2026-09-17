#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        
        string x, s;
        cin >> x;
        cin >> s;
        int operations = 0;
        bool found = false;
        while(x.length() <= 50) {
            if(x.find(s) != string::npos) {
                found = true;
                break;
            }
            x += x; 
            operations++;
        }
        if(found) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}