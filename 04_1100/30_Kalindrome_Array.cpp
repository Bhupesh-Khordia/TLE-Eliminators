// https://codeforces.com/problemset/problem/1610/B

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

        int i = 0, j = n - 1;
        while(i <= j) {
            if(arr[i] == arr[j]) {
                i++;
                j--;
            } else {
                break;
            }
        }

        if( i >= j ) {
            cout << "YES" << endl;
            continue;
        }
        
        int jcpy = j;
        int icpy = i;
        int deleteNo = arr[i];
        i++;
        while(i < j) {
            if(arr[i] == arr[j]) {
                i ++;
                j --;
            } else {
                if(arr[i] == deleteNo) i++;
                else if (arr[j] == deleteNo) j--;
                else break;
            }
        }
        
        if( i >= j ) {
            cout << "YES" << endl;
            continue;
        }

        deleteNo = arr[jcpy];
        j = jcpy - 1;
        i = icpy;
        while(i < j) {
            if(arr[i] == arr[j]) {
                i ++;
                j --;
            } else {
                if(arr[i] == deleteNo) i++;
                else if (arr[j] == deleteNo) j--;
                else break;
            }
        }

        if( i >= j ) {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }

    return 0;
}