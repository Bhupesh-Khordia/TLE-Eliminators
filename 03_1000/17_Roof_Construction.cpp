// https://codeforces.com/problemset/problem/1632/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int x = 1; // Smallest power of 2 less than or equal to n - 1
        while(true) {
            if(x * 2 <= n - 1) {
                x = x * 2;
            } else {
                break;
            }
        }

        // Set 1 = Elements from 1 to x
        // Set 2 = Elements from x+1 to n
        // Maximum adjacent xor will when when these two set elements become adjacent which will surely happen
        // And that xor will be >= x... So minimum possible will be x which will be when x and 0 are adjacent
        // So permutation = [x -1, x - 2, ..., 1, 0, x, x + 1, ..., n - 1]

        for(int i = x - 1; i >= 0; i--) {
            cout << i << " ";
        }
        for(int i = x; i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}