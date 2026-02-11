#include <bits/stdc++.h>
 
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long& num : arr) {
            cin >> num;
        }
 
        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            // if (arr[i] > n) {
            //     continue;
            // }
            int x = 1;
            while (x + i < arr.size()) {
                res += arr[i] * arr[x + i] == x;
                x *= 2;
            }
        }
        cout << res << endl;
    }
}