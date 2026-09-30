// https://codeforces.com/problemset/problem/1665/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int maxFreq = 0;

        // IDK why this codeforces is not accepting for unordered_map
        map<int, int> freq;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            maxFreq = max(maxFreq, freq[x]);
        }
        
        int ans = 0;
        while(maxFreq < n) {
            ans += 1 + (maxFreq * 2 <= n ? maxFreq : n - maxFreq);
            maxFreq *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}