// https://codeforces.com/problemset/problem/1614/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }
        
        sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.first > b.first;
        });

        vector<int> ans(n + 1);
        ans[0] = 0;
        int idx = 1;
        long long total = 0;
        for(int i = 0; i < n; i++) {
            if(! (i & 1)) {
                ans[arr[i].second] = idx;
            } else {
                ans[arr[i].second] = -idx;
                idx++;
            }

            total += 2LL * arr[i].first * abs(ans[arr[i].second]);
        }

        cout << total << endl;
        for(int i = 0; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}