#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1692/E
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        int cnt = 0;
        for (int &num : arr) {
            cin >> num;
            cnt += num == 1;
        }

        if (s > cnt) {
            cout << -1 << endl;
            continue;
        }

        if (cnt == s) {
            cout << 0 << endl;
            continue;
        }

        deque<int> left;
        deque<int> right;
        int currPosLeft = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 1) {
                left.push_back(i - currPosLeft);
                currPosLeft = i;
            }
        }

        int currPosRight = arr.size();
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == 1) {
                right.push_back(currPosRight - i);
                currPosRight = i;
            }
        }

        long long sum = 0;
        for (int i = 0 ; i < left.size() - s; i++) {
            sum += left[i];
        }

        long long res = sum;
        int r = 0;
        for (int i = left.size() - s - 1; i >= 0; i--) {
            sum -= left[i];
            sum += right[r++];
            res = min(res, sum);
        }
        cout << res << endl;
    }
}