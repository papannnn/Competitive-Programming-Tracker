#include <bits/stdc++.h>

using namespace std;
int main () {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int l = 0;
    int r = arr.size() - 1;
    while (l < r) {
        int mid = (l + r) / 2;
        cout << "?" << endl;
        for (int i = l; i <= mid; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        for (int i = mid + 1; i <= r; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout.flush();
        string s;
        cin >> s;
        if (s == "KIRI") {
            r = mid;
        } else { 
            l = mid + 1;
        }
    }
    cout << "!" << endl;
    cout << arr[l] << endl;
}