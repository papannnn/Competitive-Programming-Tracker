#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1819/problem/A
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

        map<int, int> flag;
        for (int i = 0 ; i < arr.size(); i++) {
            flag[arr[i]]++;
        }

        int mex = 0;
        for (auto &m : flag) {
            if (m.first == mex) {
                mex++;
            } else {
                break;
            }
        }

        if (mex == 0) {
            cout << "Yes" << endl;
            continue;
        }

        if (mex == n) {
            cout << "No" << endl;
            continue;
        }

        if (flag[mex + 1] == 0) {
            cout << "Yes" << endl;
            continue;
        }

        int posStart = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == mex + 1) {
                posStart = i;
                break;
            }
        }

        int posEnd = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] == mex + 1) {
                posEnd = i;
                break;
            }
        }

        for (int i = posStart; i <= posEnd; i++) {
            flag[arr[i]]--;
            if (flag[arr[i]] == 0) {
                flag.erase(arr[i]);
            }
        }

        int currMex = 0;
        for (auto &m : flag) {
            if (m.first == currMex) {
                currMex++;
            } else {
                break;
            }
        }

        cout << (currMex == mex ? "Yes" : "No") << endl;
    }
}