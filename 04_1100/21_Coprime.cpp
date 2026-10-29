// https://codeforces.com/problemset/problem/1742/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        unordered_map<int, int> lastIndex;
        for(int i = 0; i < n; i++) {
            lastIndex[arr[i]] = i + 1;
        }

        long long ans = -1;
        for(int a = 1; a <= 1000; a++) {
            for(int b = 1; b <= 1000; b++) {
                if(__gcd(a, b) == 1) {
                    if(lastIndex.find(a) != lastIndex.end() && lastIndex.find(b) != lastIndex.end()) {
                        ans = max(ans, (long long)lastIndex[a] + lastIndex[b]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}