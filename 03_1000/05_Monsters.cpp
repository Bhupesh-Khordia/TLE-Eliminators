// https://codeforces.com/problemset/problem/1849/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

static bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.first == 0 && b.first == 0) {
        return a.second < b.second;
    }

    if(a.first == 0) {
        return 1;
    }
    if(b.first == 0) {
        return 0;
    }
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> arr(n);
        for(ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            arr[i].first = temp % k;
            arr[i].second = i;
        }

        // We have to sort the array on basis of arr[i] % k. But if reaminder is 0 then it will be eliminated first. If remainders are same then we will sort on basis of index. So we will use custom comparator function.
        sort(arr.begin(), arr.end(), cmp);

        for(ll i = 0; i < n; i++) {
            cout << arr[i].second + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}