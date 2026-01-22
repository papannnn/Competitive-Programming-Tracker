#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1620/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> flag;
        for (int &num : arr) {
            cin >> num;
            flag.insert(num);
        }
        sort(arr.begin(), arr.end());
        int cnt = arr.size() / 2;
        for (int i = 0 ; i < arr.size() && cnt; i++) {
            for (int j = i + 1; j < arr.size() && cnt; j++) {
                int maxVal = max(arr[i], arr[j]);
                int minVal = min(arr[i], arr[j]);

                if (flag.find(maxVal % minVal) == flag.end()) {
                    cout << maxVal << " " << minVal << endl;
                    cnt--;
                    continue;
                }
            }
        }
    }
}
