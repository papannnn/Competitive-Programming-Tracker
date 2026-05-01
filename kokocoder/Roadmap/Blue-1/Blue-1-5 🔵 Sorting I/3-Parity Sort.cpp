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

        vector<int> arr1(arr);
        sort(arr1.begin(), arr1.end());
        
        bool valid = true;
        for (int i = 0; i < arr.size(); i++) {
            valid &= (arr[i] % 2) == (arr1[i] % 2);
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}