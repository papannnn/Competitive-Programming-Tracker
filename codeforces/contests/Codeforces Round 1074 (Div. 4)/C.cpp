#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        unordered_set<int> mapping;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (mapping.find(num) == mapping.end()) {
                mapping.insert(num);
                arr.push_back(num);
            }
        }

        sort(arr.begin(), arr.end());
        int res = 1;
        int streak = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - 1 == arr[i - 1]) {
                streak++;
            } else {
                streak = 1;
            }
            res = max(streak, res);
        }
        cout << res << endl;
    }   
}