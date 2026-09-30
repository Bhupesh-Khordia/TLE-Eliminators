#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(d < b) {
            cout << -1 << endl;
        } else {
            // Match y axis values by moving (a, b)
            int na = a + (d - b);
            int nb = b + (d - b);
            if(c > na) {
                cout << -1 << endl;
            } else {
                cout << (na - c) + (d - b) << endl;
            }
        }
    }
    return 0;
}