#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/C2
// O(t * n)
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

        priority_queue<int> queue;
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] > 0) {
                queue.push(arr[i]);
                continue;
            }

            if (queue.empty()) {
                continue;
            }

            res += queue.top();
            queue.pop();
        }
        cout << res << endl;
    }
}