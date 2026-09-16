#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int k;
        cin >> k;

        vector<int> a(n);
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a[i] = temp;

            if (i > 0 && a[i] < a[i - 1]) {
                sorted = false;
            }
        }

        if(sorted || k >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0;
}