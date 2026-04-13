#include <bits/stdc++.h>

using namespace std;
//
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        int res = 0;
        int curr = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                curr++;
                res = max(res, curr);
            } else {
                curr = 1;
            }
        }
        cout << (res < m ? "YES" : "NO") << endl;
    }
}