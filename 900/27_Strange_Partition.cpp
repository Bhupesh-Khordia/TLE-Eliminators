// https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
using namespace std;

long long ceilDivi(long long a, long long b) {
    if(a % b == 0) return a / b;
    else return a / b + 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, x;
        cin >> n >> x;
        
        long long sum = 0;
        long long maxBeauty = 0;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            maxBeauty += ceilDivi(arr[i], x);
        }
        long long minBeauty = ceilDivi(sum, x);

        cout << minBeauty << " " << maxBeauty << endl;
    }
    return 0;
}