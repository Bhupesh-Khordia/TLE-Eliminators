// https://codeforces.com/problemset/problem/1850/E

// Overflowssssss
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // (x1 + 2w)^2 + (x2 + 2w)^2 + ... = c
        // 4nw^2 + 4w(x1 + x2 + ...) + x1^2 + x2^2 + ... = c

        ll sum = 0;
        ll sumSquares = 0;
        for(ll i = 0; i < n; i++) {
            sum += arr[i];
            sumSquares += arr[i] * arr[i];
        }


        ll a_term = 4 * n;
        ll b_term = 4 * sum;
        ll c_term = sumSquares - c;

        ll discriminant = b_term * b_term - 4 * a_term * c_term;

        ll w1 = (-b_term + sqrt(discriminant)) / (2 * a_term);
        ll w2 = (-b_term - sqrt(discriminant)) / (2 * a_term);

        if(w1 >= 0) {
            cout << w1 << endl;
        } else if(w2 >= 0) {
            cout << w2 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll low = 1, high = 1e9, ans = -1;

        while(low <= high) {
            ll mid = low + (high - low) / 2;
            
            unsigned long long current_area = 0;
            bool too_big = false;
            
            for(ll i = 0; i < n; i++) {
                unsigned long long side = arr[i] + 2 * mid;
                current_area += side * side;
                
                if(current_area > c) {
                    too_big = true;
                    break; 
                }
            }

            if(too_big || current_area > c) {
                high = mid - 1;
            } else if(current_area == c) {
                ans = mid;
                break;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}