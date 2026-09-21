#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int a, b;
        cin >> a >> b;
        
        if(n == a && n == b) {
            cout << "Yes" << endl;
        } else if(a + b >= n - 1) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}