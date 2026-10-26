// https://codeforces.com/problemset/problem/1797/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> arr(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        
        vector<vector<int>> rotated(n, vector<int>(n));
        // x,y in original matrix corresponds to n-1-x, n-1-y in rotated matrix
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                rotated[n-1-i][n-1-j] = arr[i][j];
            }
        }

        int unequal_count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] != rotated[i][j]) {
                    unequal_count++;
                }
            }
        }

        int req_ops = unequal_count / 2;
        if(req_ops <= k && ((k - req_ops) % 2 == 0 || n % 2 != 0)) { // In odd case we can use the center 
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}