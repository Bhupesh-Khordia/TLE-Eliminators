// https://codeforces.com/problemset/problem/1725/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ceilDiv(ll a, ll b) {
    if(a % b == 0) return (a / b) + 1;
    else return ceil((double)a/(double)b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, d;
    cin >> n >> d;

    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll i = 0, j = n - 1;
    ll ans = 0;
    while(i <= j) {
        ll div = ceilDiv(d, arr[j]);
        if(i + div - 1 <= j) {
            ans++;
            i += div - 1;
            j--;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}