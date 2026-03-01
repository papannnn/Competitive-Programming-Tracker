#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/E
// O(t * n sqrt(a))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        if (is_sorted(arr.begin(), arr.end())) {
            cout << "Bob" << endl;
            continue;
        }

        vector<int> res;
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            set<int> flag;
            for (int j = 2; j * j <= arr[i]; j++) {
                while (arr[i] % j == 0) {
                    flag.insert(j);
                    arr[i] /= j;
                }
            }

            if (arr[i] > 1) {
                flag.insert(arr[i]);
            }

            if (flag.size() == 0) {
                res.push_back(1);
            } else if (flag.size() == 1) {
                res.push_back(*flag.begin());
            } else if (flag.size() > 1) {
                valid = false;
            }
        }

        if (!valid) {
            cout << "Alice" << endl;
            continue;
        }

        cout << (is_sorted(res.begin(), res.end()) ? "Bob" : "Alice") << endl;
    }
}