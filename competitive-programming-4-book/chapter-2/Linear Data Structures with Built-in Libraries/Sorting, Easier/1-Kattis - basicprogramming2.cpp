#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/basicprogramming2
// O(n)
int main () {
    int n, t;
    cin >> n >> t;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }
    sort(arr.begin(), arr.end());

    if (t == 1) {
        unordered_set<long long> flag;
        bool valid = false;
        for (long long &num : arr) {
            valid |= flag.find(num) != flag.end();
            flag.insert(7777 - num);
        }
        cout << (valid ? "Yes" : "No") << endl;
    } else if (t == 2) {
        unordered_set<long long> flag;
        for (long long &num : arr) {
            flag.insert(num);
        }
        cout << (flag.size() == n ? "Unique" : "Contains duplicate") << endl;
    } else if (t == 3) {
        unordered_map<long long, int> mapping;
        for (long long &num : arr) {
            mapping[num]++;
        }

        long long val = -1;
        for (auto &m : mapping) {
            if (m.second > n / 2) {
                val = m.first;
            }
        }
        cout << val << endl;
    } else if (t == 4) {
        if (n % 2) {
            cout << arr[n / 2] << endl;
        } else {
            cout << arr[n / 2 - 1] << " " << arr[n / 2] << endl;
        }
    } else if (t == 5) {
        for (long long &num : arr) {
            if (num >= 100 && num <= 999) {
                cout << num << " ";
            }
        }
    }
}