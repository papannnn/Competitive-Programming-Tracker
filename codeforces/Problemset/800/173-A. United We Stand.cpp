#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1859/A
// O(t * a log a)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int &n : arr) {
            cin >> n;
        }

        sort(arr.begin(), arr.end());
        
        vector<int> c;
        int bigNum = arr[arr.size() - 1];
        while (!arr.empty() && arr[arr.size() - 1] == bigNum) {
            c.push_back(bigNum);
            arr.pop_back();
        }

        if (arr.empty()) {
            cout << -1 << endl;
        } else {
            cout << arr.size() << " " << c.size() << endl;
            for (int i : arr) {
                cout << i << " ";
            }
            cout << endl;

            for (int i : c) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}