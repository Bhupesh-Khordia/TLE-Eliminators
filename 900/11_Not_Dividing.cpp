// https://codeforces.com/problemset/problem/1794/B

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
            if(arr[i] == 1) {
                arr[i]++;
                while(arr[i] % arr[i - 1] == 0) {
                    arr[i]++;
                }
            }
            if(i > 0 && arr[i] % arr[i - 1] == 0) {
                arr[i]++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}