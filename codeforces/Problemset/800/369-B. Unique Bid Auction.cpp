#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1454/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        int lowestKey = -1;
        for (auto m : mapping) {
            if (m.second == 1) {
                lowestKey = lowestKey == -1 ? m.first : min(m.first, lowestKey);
            }
        }

        if (lowestKey == -1) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == lowestKey) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}