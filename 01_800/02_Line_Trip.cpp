#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int x;
        cin >> x;


        int maxi = INT_MIN;
        int prev = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a[i] = temp;
            maxi = max(maxi, a[i] - prev);
            prev = a[i];
        }

        maxi = max(maxi, 2 * (x - prev));
        
        cout << maxi << endl;
    }
}