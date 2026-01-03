#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2148/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> even;
        deque<int> odd;

        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2) {
                odd.push_back(num);
            } else {
                even.push_back(num);
            }
        }

        sort(odd.begin(), odd.end());
        if (odd.size() == 0) {
            cout << 0 << endl;
            continue;
        }

        long long res = odd[odd.size() - 1];
        odd.pop_back();
        for (int i = 0 ; i < even.size(); i++) {
            res += even[i];
        }

        bool isOn = true;
        while (!odd.empty()) {
            if (isOn) {
                odd.pop_front();
            } else {
                res += odd[odd.size() - 1];
                odd.pop_back();
            }
            isOn = !isOn;
        }
        cout << res << endl;
    }
}