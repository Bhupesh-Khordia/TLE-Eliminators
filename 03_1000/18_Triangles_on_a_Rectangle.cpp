// https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long w, h;
        cin >> w >> h;
        

        long long doubledArea = LLONG_MIN;
        long long maxHorizontalDistance = 1;
        for(long long i = 0; i < 2; i++) {
            long long k;
            cin >> k;
            long long mini = LLONG_MAX; // First
            long long maxi = LLONG_MIN; // Last
            while(k--) {
                long long x;
                cin >> x;
                mini = min(mini, x);
                maxi = max(maxi, x);
            }

            maxHorizontalDistance = max(maxHorizontalDistance, maxi - mini);
        }
        doubledArea = max(doubledArea, maxHorizontalDistance * h);

        long long maxVerticalDistance = 1;
        for(long long i = 0; i < 2; i++) {
            long long k;
            cin >> k;
            long long mini = LLONG_MAX; // First
            long long maxi = LLONG_MIN; // Last
            while(k--) {
                long long x;
                cin >> x;
                mini = min(mini, x);
                maxi = max(maxi, x);
            }

            maxVerticalDistance = max(maxVerticalDistance, maxi - mini);
        }
        doubledArea = max(doubledArea, maxVerticalDistance * w);

        cout << doubledArea << endl;
        
    }
    return 0;
}