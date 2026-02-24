#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1832/C
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
        
        vector<int> uniq;
        uniq.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != arr[i - 1]) {
                uniq.push_back(arr[i]);
            }
        }

        int ptr = 1;
        int prev = arr[0];
        int res = 0;
        while (ptr < arr.size()) {
            // ptr++;
            while (ptr < arr.size() && arr[ptr] == prev) {
                ptr++;
            }

            bool goDown = false;
            while (ptr < arr.size() && arr[ptr] >= prev) {
                goDown = true;
                prev = arr[ptr];
                ptr++;
            }

            bool goUp = false;
            while (ptr < arr.size() && arr[ptr] <= prev) {
                goUp = true;
                prev = arr[ptr];
                ptr++;
            }
            res += goUp + goDown;
        }
        cout << res + 1<< endl;
    }
}