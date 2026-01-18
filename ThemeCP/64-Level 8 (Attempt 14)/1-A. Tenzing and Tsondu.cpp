#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1842/A
// O(t * n log n + m log m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        deque<int> arr1(n);
        deque<int> arr2(m);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        sort(arr1.begin(), arr1.end(), greater<int>());
        sort(arr2.begin(), arr2.end(), greater<int>());

        int tsondu = arr1[0];
        int tenzing = arr2[0];
        arr1.pop_front();
        arr2.pop_front();

        while ((tsondu || !arr1.empty()) && (tenzing || !arr2.empty())) {
            if (tsondu == 0) {
                tsondu = arr1[0];
                arr1.pop_front();
            }

            if (tenzing == 0) {
                tenzing = arr2[0];
                arr2.pop_front();
            }

            int temp = tsondu;
            tsondu = max(tsondu - tenzing, 0);
            tenzing = max(tenzing - temp, 0);
        }

        bool tsonduLose = tsondu == 0 && arr1.empty();
        bool tenzingLose = tenzing == 0 && arr2.empty();
        if (tsonduLose && tenzingLose) {
            cout << "Draw" << endl;
        } else if (tsonduLose) {
            cout << "Tenzing" << endl;
        } else {
            cout << "Tsondu" << endl;
        }
    }
}