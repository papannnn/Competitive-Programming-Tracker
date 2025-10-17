#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1691/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int oddCnt = 0;
        int evenCnt = 0;
        for (int &num : arr) {
            cin >> num;
            if (num % 2) {
                oddCnt++;
            } else {
                evenCnt++;
            }
        }
        
        cout << min(oddCnt, evenCnt) << endl;
    }
}