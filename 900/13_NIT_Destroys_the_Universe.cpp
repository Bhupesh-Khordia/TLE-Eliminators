// https://codeforces.com/problemset/problem/1696/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] != 0) {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        // All elements are zero
        if (first == -1) {
            cout << 0 << '\n';
        }
        // There is a zero between first and last non-zero
        // [1,0,1,0,1] => 2 First convert to [3,3,3,3,3] then convert to [0,0,0,0,0]
        else {
            bool hasZero = false;

            for (int i = first; i <= last; i++) {
                if (arr[i] == 0) {
                    hasZero = true;
                    break;
                }
            }

            cout << (hasZero ? 2 : 1) << '\n';
        }
    }
}