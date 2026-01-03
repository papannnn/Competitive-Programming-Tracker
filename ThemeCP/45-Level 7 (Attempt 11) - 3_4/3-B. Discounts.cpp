#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2143/B
// O(t * (n + m))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        deque<int> arr1(n);
        vector<int> arr2(m);
        for (int &num : arr1) {
            cin >> num;
            // cout << num << " ";
        }
        // cout << endl;

        for (int &num : arr2) {
            cin >> num;
            // cout << num << " ";
        }
        // cout << endl;

        sort(arr1.begin(), arr1.end(), greater<int>());
        sort(arr2.begin(), arr2.end());


        long long res = 0;
        for (int i = 0 ; i < arr2.size(); i++) {
            if (arr1.size() < arr2[i]) {
                break;
            }

            int amountNeedToPay = arr2[i] - 1;
            // cout << amountNeedToPay << endl;
            for (int i = 0 ; i < amountNeedToPay; i++) {
                res += arr1[0];
                arr1.pop_front();
            }
            arr1.pop_front();
        }

        for (int i = 0 ; i < arr1.size(); i++) {
            res += arr1[i];
        }
        cout << res << endl;
    }
}