#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1807/G1
// O(t * n log n)
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

        sort(arr.begin(), arr.end());

        vector<int> prefix;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            prefix.push_back(arr[i] + sum);
            sum += arr[i];
        }

        bool valid = true;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 1) {
                continue;
            }

            int left = 0;
            int right = i - 1;
            bool found = false;
            int val = arr[i];
            while (right >= 0) {
                if (arr[right] <= val) {
                    val -= arr[right];
                }
                right--;
            }

            if (val) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}