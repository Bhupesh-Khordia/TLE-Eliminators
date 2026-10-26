// https://codeforces.com/problemset/problem/1791/G1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> teleporters; // ai + index + 1 = Total cost to reach and use ith teleporter from 0
        for(int i = 0; i < n; i++) {
            teleporters.push_back(arr[i] + (i + 1));
        }
        sort(teleporters.begin(), teleporters.end());

        long long cost = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            if(cost + teleporters[i] > c) {
                break;
            }
            cost += teleporters[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}