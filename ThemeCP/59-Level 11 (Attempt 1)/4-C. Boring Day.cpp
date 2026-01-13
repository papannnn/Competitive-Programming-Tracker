#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1982/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        long long tot = 0;
        deque<int> temp;
        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            while (!temp.empty() && tot + arr[i] > r) {
                tot -= temp[0];
                temp.pop_front();
            }

            tot += arr[i];
            temp.push_back(arr[i]);
            if (tot >= l && tot <= r) {
                res++;
                tot = 0;
                temp.clear();
            }
        }
        cout << res << endl;
    }
}