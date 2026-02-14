#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2044/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> flag;
        for (int &num : arr) {
            cin >> num;
            flag.insert(num);
        }

        if (flag.size() == n) {
            for (int i = 0 ; i < arr.size(); i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            continue;
        }

        vector<int> missingNum;
        for (int i = 1; i <= n; i++) {
            if (flag.find(i) == flag.end()) {
                missingNum.push_back(i);
            }
        }

        set<int> flagging;
        for (int i = 0 ; i < arr.size(); i++) {
            if (flagging.find(arr[i]) == flagging.end()) {
                cout << arr[i] << " ";
                flagging.insert(arr[i]);
            } else {
                cout << missingNum.back() << " ";
                missingNum.pop_back();
            }
        }
        cout << endl;
    }
}