#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1842/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        deque<int> arr1(n);
        deque<int> arr2(n);
        deque<int> arr3(n);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        for (int &num : arr3) {
            cin >> num;
        }

        bool valid = true;
        long long curr = 0;
        while (curr != x && valid) {
            valid = false;
            if (!arr1.empty()) {
                if ((x | arr1[0]) == x) {
                    curr |= arr1[0];
                    arr1.pop_front();
                    valid = true;
                    continue;
                }
            }

            if (!arr2.empty()) {
                if ((x | arr2[0]) == x) {
                    curr |= arr2[0];
                    arr2.pop_front();
                    valid = true;
                    continue;
                }
            }

            if (!arr3.empty()) {
                if ((x | arr3[0]) == x) {
                    curr |= arr3[0];
                    arr3.pop_front();
                    valid = true;
                    continue;
                }
            }
        }
        cout << (curr == x ? "Yes" : "No") << endl;
    }
}