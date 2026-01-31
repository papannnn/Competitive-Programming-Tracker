#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1955/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        deque<long long> arr(n);
        long long tot = 0;
        for (long long& num : arr) {
            cin >> num;
            tot += num;
        }

        while (arr.size() > 1 && k) {
            if (arr[0] > arr.back()) {
                if (k >= arr.back() * 2) {
                    k -= arr.back() * 2;
                    arr[0] -= arr.back();
                    arr.pop_back();
                    if (arr[0] == 0) {
                        arr.pop_front();
                    }
                } else {
                    arr[0] -= ceil(static_cast<double>(k) / 2);
                    arr.back() -= k / 2;
                    k = 0;
                    if (arr[0] == 0) {
                        arr.pop_front();
                    }

                    if (arr.back() == 0) {
                        arr.pop_back();
                    }
                }
            } else {
                if (k >= arr[0] * 2) {
                    k -= arr[0] * 2;
                    arr.back() -= arr[0];
                    arr.pop_front();
                    if (arr.back() == 0) {
                        arr.pop_back();
                    }
                } else {
                    arr[0] -= ceil(static_cast<double>(k) / 2);
                    arr.back() -= k / 2;
                    k = 0;
                    if (arr[0] == 0) {
                        arr.pop_front();
                    }

                    if (arr.back() == 0) {
                        arr.pop_back();
                    }
                }
            }
        }

        if (arr.size() == 1 && k) {
            if (arr[0] <= k) {
                arr.pop_back();
            }
        }
        cout << n - arr.size() << endl;
    }
}