#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        map<int, int> pos;
        for (int i = 0 ; i < arr1.size(); i++) {
            cin >> arr1[i];
            pos[arr1[i]] = i;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        int currPos = pos[arr2[0]];
        bool valid = true;
        for (int i = 1; i < arr2.size(); i++) {
            if (currPos > pos[arr2[i]]) {
                valid = false;
                break;
            }
            currPos = pos[arr2[i]];
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}