#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2143/A
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

        int l, r;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == n) {
                l = i;
                r = i;
                break;
            }
        }

        int target = n - 1;
        bool valid = true;
        while (l > 0 && r < arr.size() - 1) {
            if (arr[l - 1] == target) {
                target--;
                l--;
                continue;
            }

            if (arr[r + 1] == target) {
                target--;
                r++;
                continue;
            }
            valid = false;
            break;
        }

        while (l > 0) {
            if (arr[l - 1] == target) {
                target--;
                l--;
                continue;
            }
            valid = false;
            break;
        }

        while (r < arr.size() - 1) {
            if (arr[r + 1] == target) {
                target--;
                r++;
                continue;
            }
            valid = false;
            break;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}