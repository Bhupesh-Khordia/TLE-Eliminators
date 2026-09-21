#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int firstDigit = 0;
        int noOfDigits = 0;
        int temp = n;
        while(temp > 0) {
            noOfDigits++;
            firstDigit = temp;
            temp /= 10;
        }
        
        int ans = 0;
        if(noOfDigits == 1) {
            cout << firstDigit << endl;
        } else if (noOfDigits == 2) {
            cout << firstDigit + 9 << endl;
        } else {
            ans = ((noOfDigits - 2) * 9) + 9 + firstDigit;
            cout << ans << endl;
        }

    }
    return 0;
}