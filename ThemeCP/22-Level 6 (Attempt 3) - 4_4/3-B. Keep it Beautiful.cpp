#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1841/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        bool unsort = false;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (i == 0) {
                cout << 1;
                arr.push_back(num);
                continue;
            }

            if (i == 1) {
                if (num < arr[0]) {
                    unsort = true;
                }
                cout << 1;
                arr.push_back(num);
                continue;
            }
            
            if (unsort) {
                if (num >= arr[arr.size() - 1] && num <= arr[0]) {
                    cout << 1;
                    arr.push_back(num);
                } else {
                    cout << 0;
                }
            } else {
                if (num >= arr[arr.size() - 1]) {
                    arr.push_back(num);
                    cout << 1;
                } else if (num <= arr[0] && num < arr[arr.size() - 1]) {
                    unsort = true;
                    arr.push_back(num);
                    cout << 1;
                } else {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}
// 3 7 7 9 2 4