#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1931/C
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
        
        int first = arr[0];
        int last = arr[arr.size() - 1];
        if (first == last) {
            int count = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] != first) {
                    break;
                }
                count++;
            }

            if (count == arr.size()) {
                cout << 0 << endl;
                continue;
            }

            int count2 = 0;
            for (int i = arr.size() - 1; i >= 0; i--) {
                if (last != arr[i]) {
                    break;
                }
                count2++;
            }
            cout << arr.size() - (count + count2) << endl;
            continue;
        } else {
            int count = 0;
            for (int i = 0 ; i < arr.size(); i++) {
                if (arr[i] != first) {
                    break;
                }
                count++;
            }

            int count1 = 0;
            for (int i = arr.size() - 1; i >= 0; i--) {
                if (last != arr[i]) {
                    break;
                }
                count1++;
            }
            int maxVal = max(count, count1);
            cout << arr.size() - maxVal << endl;
        }


    }
}