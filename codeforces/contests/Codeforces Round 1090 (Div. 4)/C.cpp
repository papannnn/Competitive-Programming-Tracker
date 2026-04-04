#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n * 3);
     
        int val = n * 3 - 1;
        for (int i = 1; i < arr.size(); i += 3) {
            arr[i] = val;
            val -= 2;
        }

        val = n * 3;
        for (int i = 2; i < arr.size(); i += 3) {
            arr[i] = val;
            val -= 2;
        }

        val = 1;
        for (int i = 0; i < arr.size(); i += 3) {
            arr[i] = val++;
        }

        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}