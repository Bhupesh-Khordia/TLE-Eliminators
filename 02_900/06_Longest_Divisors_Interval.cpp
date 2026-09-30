// https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        
        // Just check if n is multiple of 1 to k.. 
        // If k - 1 does not divide n then 2 * (k - 1) will also not divide .. and so on
        // Which makes k the longest window possible 

        long long i = 1;
        while (true) {
            if(n % i != 0) {
                cout << i - 1 << endl;
                break;
            }
            i++;
        }
    }
    return 0;
}