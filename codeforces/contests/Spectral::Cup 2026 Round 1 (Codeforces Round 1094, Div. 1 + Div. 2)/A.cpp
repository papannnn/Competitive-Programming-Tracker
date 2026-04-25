#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        bool valid = false;
        for (long long &num : arr) {
            cin >> num;
            valid |= num == 100;
        }
        cout << (valid ? "Yes" : "No") << endl;
    }
}