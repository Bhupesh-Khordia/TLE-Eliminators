// https://codeforces.com/problemset/problem/1820/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long n = s.size();

        s = s + s;
        int tempCnt = 0;
        int cnt = 0;
        for(int i = 0; i < 2*n; i++) {
            if(s[i] == '1') {
                tempCnt++;
                cnt = max(cnt, tempCnt);
            } else {
                tempCnt = 0;
            }
        }

        if(cnt >= n) {
            cout << n * n << endl;
            continue;
        }

        long long ans = 0;
        long long i = 1;
        while(cnt) {
            ans = max(ans, cnt * i);
            i++;
            cnt--;
        }
        cout << ans << endl;
    }
    return 0;
}