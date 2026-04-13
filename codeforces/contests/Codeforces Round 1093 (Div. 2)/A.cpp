#include <bits/stdc++.h>

using namespace std;
//
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        unordered_set<long long> flag;
        bool valid = true;
        for (long long &num : arr) {
            cin >> num;
            if (flag.find(num) != flag.end()) {
                valid = false;
            }
            flag.insert(num);
        }

        if (valid) {
            sort(arr.begin(), arr.end(), greater<long long>());
            for (long long &num : arr) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}