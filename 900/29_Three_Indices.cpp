// https://codeforces.com/problemset/problem/1380/A

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
        int a = -1, b = -1, c = -1;
        vector<pair<int, int>> prevMin (n); // With Index
        prevMin[0] = {arr[0], 0};
        for(int i = 1; i < n; i++) {
            if(arr[i] <= prevMin[i - 1].first) {
                prevMin[i] = {arr[i], i};
            } else {
                prevMin[i] = prevMin[i - 1];
            }
        }

        int nextMin = INT_MAX;
        int nextMinIndex = -1;
        for(int i = n - 1; i >= 0; i--) {
            if(i > 0 && i < n - 1) {
                if(prevMin[i - 1].first < arr[i] && arr[i] > nextMin) {
                    a = prevMin[i - 1].second;
                    b = i;
                    c = nextMinIndex;
                    break;
                }
            }
            if(arr[i] <= nextMin) {
                nextMin = arr[i];
                nextMinIndex = i;
            }
        }

        if(a == -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a + 1 << " " << b + 1 << " " << c + 1 << endl;
        }
    }
    return 0;
}