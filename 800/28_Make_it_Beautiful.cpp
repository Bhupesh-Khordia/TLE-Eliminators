#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        bool allSame = true;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i > 0 && arr[i] != arr[i - 1]) {
                allSame = false;
            }
        }
        
        if(allSame) {
            cout << "NO" << endl;
            continue;
        }

        sort(arr.begin(), arr.end(), greater<int>());

        int last = arr[n - 1];
        for(int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;

        cout << "YES" << endl;
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}