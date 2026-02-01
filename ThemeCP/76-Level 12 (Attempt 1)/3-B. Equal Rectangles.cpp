#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1203/problem/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<long long> arr(n * 4);
        for (long long &num : arr) {
            cin >> num;
        }
        
        sort(arr.begin(), arr.end());
        if (arr[0] != arr[1] || arr[arr.size() - 1] != arr[arr.size() - 2]) {
            cout << "NO" << endl;
            continue;
        }
        
        long long prevArea = arr[0] * arr[arr.size() - 1];
        arr.pop_back();
        arr.pop_back();
        arr.pop_front();
        arr.pop_front();
        bool valid = true;
        while (!arr.empty()) {
            if (arr[0] != arr[1] || arr[arr.size() - 1] != arr[arr.size() - 2]) {
                valid = false;
                break;
            }

            long long currArea = arr[0] * arr[arr.size() - 1];
            if (currArea != prevArea) {
                valid = false;
                break;
            }
            arr.pop_back();
            arr.pop_back();
            arr.pop_front();
            arr.pop_front();
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}