// https://codeforces.com/problemset/problem/1411/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool fair(ll n) {
    string s = to_string(n);
    for(char c : s) {
        if(c != '0' && n % (c - '0') != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        while(true) {
            if(fair(n)) {
                cout << n << endl;
                break;
            } else {
                n++;
            }
        }
    }

    return 0;
}