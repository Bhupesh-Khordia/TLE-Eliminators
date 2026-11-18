// https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<ll> index(n + 1);
        for(ll i = 0; i < n; i++) {
            index[arr[i]] = i;
        }

        ll borderLeft = 0, borderRight = n - 1;
        ll mini = 1, maxi = n;

        while(borderLeft <= borderRight && mini <= maxi && (index[mini] == borderLeft || index[mini] == borderRight || index[maxi] == borderLeft || index[maxi] == borderRight)) {
            if(index[mini] == borderLeft) {
                borderLeft++;
                mini++;
            } else if(index[mini] == borderRight) {
                borderRight--;
                mini++;
            } else if(index[maxi] == borderLeft) {
                borderLeft++;
                maxi--;
            } else {
                borderRight--;
                maxi--;
            }
        }

        if(mini > maxi || borderLeft > borderRight) {
            cout << -1 << endl;
        } else {
            cout << borderLeft + 1 << " " << borderRight + 1 << endl;
        }
    }

    return 0;
}