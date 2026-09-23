// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> sumArr(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;
            sumArr[i] = sum;
        }


        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;
            
            cout << ((sumArr[n - 1] - (sumArr[r - 1] - (l > 1 ? sumArr[l - 2] : 0)) + (r - l + 1) * k) & 1 ? "YES" : "NO") << endl;
        }
        
    }
    return 0;
}