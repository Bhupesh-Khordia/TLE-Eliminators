#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        
        int first = ((c + 1 ) / 2) + a;
        int second = (c / 2) + b;

        if(first > second) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    return 0;
}