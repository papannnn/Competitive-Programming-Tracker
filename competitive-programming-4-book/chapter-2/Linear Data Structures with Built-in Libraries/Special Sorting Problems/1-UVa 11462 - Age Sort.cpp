#include <bits/stdc++.h>

using namespace std;
// O(t * n log n)
int main () {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        bool first = true;
        for (int &num : arr) {
            if (!first) {
                cout << " ";
            }
            first = false;
            cout << num;
        }
        cout << endl;
    }
}