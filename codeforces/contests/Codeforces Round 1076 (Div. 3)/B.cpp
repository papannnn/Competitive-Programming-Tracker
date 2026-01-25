#include <bits/stdc++.h>

using namespace std;
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

        int expected = n;
        int pos = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == expected) {
                expected--;
            } else {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            for (int &num : arr) {
                cout << num << " ";
            }
            cout << endl;
            continue;
        }

        int numPos = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == expected) {
                numPos = i;
                break;
            }
        }

        int l = pos;
        int r = numPos;
        while (l < r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}