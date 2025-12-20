#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2144/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> flagging;
        for (int i = 0 ; i < arr.size(); i++) {
            cin >> arr[i];
            flagging.insert(arr[i]);
        }

        deque<int> missingNum;
        for (int i = 1; i <= n; i++) {
            if (flagging.find(i) == flagging.end()) {
                missingNum.push_back(i);
            }
        }

        // for (int &num : missingNum) {
        //     cout << num << " ";
        // }
        // cout << endl;

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != 0) {
                continue;
            }

            arr[i] = missingNum[missingNum.size() - 1];
            missingNum.pop_back();
            // if (i + 1 != missingNum[0]) {
            //     arr[i] = missingNum[0];
            //     missingNum.pop_front();
            // } else {
            //     arr[i] = missingNum[missingNum.size() - 1];
            //     missingNum.pop_back();
            // }
        }

        if (is_sorted(arr.begin(), arr.end())) {
            cout << 0 << endl;
            continue;
        }

        // for (int &num : arr) {
        //     cout << num << " ";
        // }
        // cout << endl;

        int minVal = 1e9;
        int maxVal = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] - 1 != i) {
                minVal = min(minVal, i);
                maxVal = max(maxVal, i);
            }
        }
        
        cout << maxVal - minVal + 1 << endl;
    }
}