// https://codeforces.com/problemset/problem/1869/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<long long, long long>> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }
        
        long long nearestDistToMajorA = LLONG_MAX;
        long long nearestDistToMajorB = LLONG_MAX;
        for(int i = 0; i < k; i++) {
            long long distToA = abs(arr[a - 1].first - arr[i].first) + abs(arr[a - 1].second - arr[i].second);
            long long distToB = abs(arr[b - 1].first - arr[i].first) + abs(arr[b - 1].second - arr[i].second);
            nearestDistToMajorA = min(nearestDistToMajorA, distToA);
            nearestDistToMajorB = min(nearestDistToMajorB, distToB);
        }

        long long directDist = abs(arr[a - 1].first - arr[b - 1].first) + abs(arr[a - 1].second - arr[b - 1].second);
        if(k == 0) {
            cout << directDist << endl;
        } else {
            cout << min(directDist, nearestDistToMajorA + nearestDistToMajorB) << endl;
        }
    }
    return 0;
}