// https://codeforces.com/problemset/problem/1447/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        int mini = INT_MAX;
        int negativeCnt = 0;
        bool hasZero = false;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int x;
                cin >> x;
                mini = min(mini, abs(x));
                negativeCnt += (x < 0);
                hasZero |= (x == 0);
                sum += abs(x);
            }
        }
        
        if(hasZero || negativeCnt % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - 2 * mini << endl;
        }
    }
    return 0;
}