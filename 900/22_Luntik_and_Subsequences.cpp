// https://codeforces.com/problemset/problem/1582/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int cntZero = 0, cntOne = 0;
        for(int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            if(temp == 0) cntZero++;
            else if(temp == 1) cntOne++;
        }
        
        // (2 ^ #0) * #1
        cout << (1LL << cntZero) * cntOne << endl;
    }
    return 0;
}