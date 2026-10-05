// https://codeforces.com/problemset/problem/1506/C

#include <bits/stdc++.h>
using namespace std;

int solve(string &s1, string &s2, int i, int j, vector<vector<int>> &dp, int &maxLen) {
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    // If characters match, increment length
    if (s1[i] == s2[j]) {
        dp[i][j] = 1 + solve(s1, s2, i - 1, j - 1, dp, maxLen);
        maxLen = max(maxLen, dp[i][j]); // update global max
    } else {
        dp[i][j] = 0;
    }
    
    // Explore all paths
    solve(s1, s2, i - 1, j, dp, maxLen);
    solve(s1, s2, i, j - 1, dp, maxLen);
    
    return dp[i][j];
}
int lcs(string &s1,string &s2){
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m, vector<int> (n, -1));
    int ans = 0;
    solve(s1, s2, m - 1, n - 1, dp, ans);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        
        cout << a.length() + b.length() - 2 * lcs(a, b) << endl;
    }
    return 0;
}   