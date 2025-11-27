#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1770/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int l = 0;
        int r = arr.size() - 1;

        int top = n;
        int back = 1;
        int cnt = 0;
        while (cnt < n) {
            int a = k - 1;
            while (a-- && cnt < n) {
                cout << top << " ";
                top--;
                cnt++;
            }

            if (cnt == n) {
                break;
            }

            cout << back << " ";
            back++;
            cnt++;
        }

        cout << endl;
    }
}
