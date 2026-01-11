#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1993/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        int odd = 0;
        int even = 0;
        long long maxOdd = 0;
        long long maxEven = 0;
        vector<long long> evenArr;
        for (long long &num : arr) {
            cin >> num;
            if (num % 2) {
                odd++;
                maxOdd = max(maxOdd, num);
            } else {
                even++;
                maxEven = max(maxEven, num);
                evenArr.push_back(num);
            }
        }

        if (odd == 0 || even == 0) {
            cout << 0 << endl;
            continue;
        }

        sort(evenArr.begin(), evenArr.end(), greater<long long>());
        vector<long long> remainder;
        for (int i = 0 ; i < evenArr.size(); i++) {
            if (evenArr[i] > maxOdd) {
                remainder.push_back(evenArr[i]);
            } else {
                maxOdd += evenArr[i];
            }
        }
        // long long largest = 0;
        for (int i = remainder.size() - 1; i >= 0; i--) {
            if (remainder[i] > maxOdd) {
                break;
            }
            maxOdd += remainder[i];
        }

        cout << even + (maxEven > maxOdd) << endl;
    }
}