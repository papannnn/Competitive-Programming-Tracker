#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1923/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int cnt = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 1) {
                cnt++;
            }
        }

        int idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 1) {
                idx = i;
                break;
            }
        }

        int zeroCnt = 0;
        int oneCnt = 0;
        while (oneCnt < cnt) {
            if (arr[idx++] == 1) {
                oneCnt++;
            } else {
                zeroCnt++;
            }
        }
        cout << zeroCnt << endl;
    }
}