#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        long long sum = 0;
        for (int &num : arr) {
            cin >> num;
            sum += num;
        }
    
        if (sum > s) {
            cout << "NO" << endl;
            continue;
        }

        if (sum == s) {
            cout << "YES" << endl;
            continue;
        }

        if ((s - sum) % x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}