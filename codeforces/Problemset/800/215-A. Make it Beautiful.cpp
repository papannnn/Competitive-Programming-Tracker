#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1783/A
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        vector<int> res;
        bool head = true;
        while (!arr.empty()) {
            if (head) {
                res.push_back(arr[0]);
                arr.pop_front();
            } else {
                res.push_back(arr[arr.size() - 1]);
                arr.pop_back();
            }
            head = !head;
        }

        if (res[0] == res[1]) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}