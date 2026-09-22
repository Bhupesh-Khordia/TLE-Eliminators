// https://codeforces.com/problemset/problem/1904/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;
        
        // 8 options to attack king
        int options[8][2] = {
            {a, b},
            {a, -b},
            {-a, b},
            {-a, -b},
            {b, a},
            {b, -a},
            {-b, a},
            {-b, -a}
        };

        int ans = 0;
        set<pair<int, int>> candidateKnights;
        for(int i = 0; i < 8; i++) {
            // Knight attacking king
            int knight_x = xk + options[i][0];
            int knight_y = yk + options[i][1];

            candidateKnights.insert({knight_x, knight_y});
        }

        for(auto knight : candidateKnights) {
            int knight_x = knight.first;
            int knight_y = knight.second;

            // 8 options to attack queen
            bool possible = false;
            for(int j = 0; j < 8; j++) {
                int knight_attack_x = knight_x + options[j][0];
                int knight_attack_y = knight_y + options[j][1];

                if(xq == knight_attack_x && yq == knight_attack_y) {
                    possible = true;
                    break;
                }
            }

            if(possible) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}