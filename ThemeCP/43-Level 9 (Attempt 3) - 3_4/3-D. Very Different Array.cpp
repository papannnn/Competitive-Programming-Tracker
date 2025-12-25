#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1921/D
// O(t * n + m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n);
        vector<int> arr2(m);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int l2 = 0;
        int r2 = arr2.size() - 1;

        int l1 = 0;
        int r1 = arr1.size() - 1;

        long long res = 0;
        while (l1 <= r1) {
            int val1 = abs(arr1[l1] - arr2[l2]);
            int val2 = abs(arr1[l1] - arr2[r2]);
            int val3 = abs(arr1[r1] - arr2[l2]);
            int val4 = abs(arr1[r1] - arr2[r2]);

            int maxVal = max(val1, max(val2, max(val3, val4)));
            if (maxVal == val1) {
                l1++;
                l2++;
            } else if (maxVal == val2) {
                l1++;
                r2--;
            } else if (maxVal == val3) {
                r1--;
                l2++;
            } else {
                r1--;
                r2--;
            }
            res += maxVal;
        }


        cout << res << endl;
    }
}