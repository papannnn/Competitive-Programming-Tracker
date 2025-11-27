#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1810/B
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        deque<int> res;
        while (n != 3) {
            // cout << n << endl;
            int num = (n + 1) / 2;
            n = num;
            if (num % 2 == 1) {
                res.push_front(1);
                // n--;
            } else {
                res.push_front(2);
                n--;
            }
        }
        res.push_front(2);
        cout << res.size() << endl;
        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}
