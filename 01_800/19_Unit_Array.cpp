#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int positive_count = 0, negative_count = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if(temp > 0) {
                positive_count++;
            } else if(temp < 0) {
                negative_count++;
            }
        }
        
        if(positive_count >= negative_count) {
            if(negative_count&1) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            int diff = negative_count - positive_count;
            if((negative_count - ((diff + 1) / 2))&1) {
                cout << ((diff + 1)/2) + 1 << endl;
            } else {
                cout << ((diff + 1)/2) << endl;
            }
        }
    }
    return 0;
}