#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1873/E
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        int prev = arr[0];
        int cnt = 1;
        vector<int> uniqNum;
        vector<int> cntArr;
        for (int i = 1 ; i < arr.size(); i++) {
            if (arr[i] != prev) {
                uniqNum.push_back(prev);
                cntArr.push_back(cnt);
                prev = arr[i];
                cnt = 1;
            } else {
                cnt++;
            }
        }
        uniqNum.push_back(prev);
        cntArr.push_back(cnt);

        long long tot = 0;
        prev = 0;
        int res = uniqNum[0];
        for (int i = 0 ; i < uniqNum.size(); i++) {
            if (x - tot * abs(prev - uniqNum[i]) < 0) {
                break;
            }
            x -= tot * abs(prev - uniqNum[i]);
            res = uniqNum[i];
            tot += cntArr[i];
            prev = uniqNum[i];
        }
        
        cout << res + ((x > 0 ? x : 0) / tot) << endl;
    }
}