#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/G
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

        deque<int> q;
        int maxVal = 0;
        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                if (q.empty()) {
                    res++;
                }
                maxVal = arr[i];
                q.push_back(arr[i]);
            }

            if (i >= q[0] - 1) {
                q.pop_front();
            }
        }
        cout << res << endl;
    }
}