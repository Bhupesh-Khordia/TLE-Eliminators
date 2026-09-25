// https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Every even >=4 can be represented as sum of 4s and 6s
        if (n % 2 != 0 || n < 4) {
            cout << -1 << '\n';
            continue;
        }
        
        // Remainder can be 0, 2, 4 when divided by 6. If remainder is 0 then we can use only 6s. If remainder is 2 then we can use two 4's at the end and remove one 6. If remainder is 4 then we can use one 4 and rest 6s.
        long long mini = n / 6;
        if (n % 6 != 0)
        mini++;
        
        // As remainder when divided by 4 can be 0, 2... If 2 then we can use 6 to make it even. If remainder is 0 then we can use 4s only.
        long long maxi = n / 4;
        
        cout << mini << " " << maxi << '\n';
    }
}