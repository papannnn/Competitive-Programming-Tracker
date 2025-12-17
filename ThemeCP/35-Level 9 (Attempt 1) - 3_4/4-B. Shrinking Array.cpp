#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2112/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    int cnt = 1;
    while (t--) {
        int n;

        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 1e9;
        int ptr = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            int maxVal = -100000;
            int minVal = 1e9;
            for (int j = i + 1; j < arr.size(); j++) {
                maxVal = max(maxVal, arr[j]);
                minVal = min(minVal, arr[j]);

                if (arr[i] >= minVal - 1 && arr[i] <= maxVal + 1) {
                    res = min(res, j - i - 1);
                    break;
                }
            }
        }

        for (int i = arr.size() - 1 ; i >= 0; i--) {
            int maxVal = -100000;
            int minVal = 1e9;
            for (int j = i - 1; j >= 0; j--) {
                maxVal = max(maxVal, arr[j]);
                minVal = min(minVal, arr[j]);

                if (arr[i] >= minVal - 1 && arr[i] <= maxVal + 1) {
                    res = min(res, i - j - 1);
                    break;
                }
            }
        }
        cout << (res == 1e9 ? -1 : res) << endl;
        cnt++;
    }
}
