#include <bits/stdc++.h>

using namespace std;
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i < arr.size(); i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }

        bool valid = true;
        for (int i = 1; i < arr.size(); i++) {
            if (abs(i - arr[i]) > 1) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}
