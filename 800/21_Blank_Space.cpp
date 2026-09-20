#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int curr = 0;
        int longest = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(temp == 0) {
                curr++;
                longest = max(longest, curr);
            } else {
                curr = 0;
            }
        }
        cout << longest << endl;

    }
    return 0;
}