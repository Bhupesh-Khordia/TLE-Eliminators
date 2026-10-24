// https://codeforces.com/problemset/problem/1821/B

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr1(n);
        for(int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        vector<int> arr2(n);
        for(int i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        
        int l = -1, r = -1;
        for(int i = 0; i < n; i++) {
            if(arr1[i] != arr2[i]) {
                l = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            if(arr1[i] != arr2[i]) {
                r = i;
                break;
            }
        }

        if(l == -1 && r == -1) {
            if(isSorted(arr1)) cout << 1 << " " << n << endl;
            else cout << 1 << " " << 1 << endl;
        } else {
            while(l >= 1) {
                if(arr2[l - 1] <= arr2[l]) {
                    l--;
                } else {
                    break;
                }
            }
            while(r < n - 1) {
                if(arr2[r] <= arr2[r + 1]) {
                    r++;
                } else {
                    break;
                }
            }
            cout << l + 1 << " " << r + 1 << endl;
        }
    }
    return 0;
}