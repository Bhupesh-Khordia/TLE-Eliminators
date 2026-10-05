// https://codeforces.com/problemset/problem/1659/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, r, b;
        cin >> n >> r >> b;
        
        string result;
        while(n) {
            int x = 1; // How many R's we can put before a B
            while(x * (b + 1) + b < n) {
                x++;
            }
            
            while(x--) {
                result += 'R';
                n--;
                r--;
            }
            if(b) {
                result += 'B';
                n--;
                b--;
            }
        }
        cout << result << endl;
    }
    return 0;
}