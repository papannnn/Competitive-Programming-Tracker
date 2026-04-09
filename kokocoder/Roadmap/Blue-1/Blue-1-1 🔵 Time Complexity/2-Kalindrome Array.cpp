#include <bits/stdc++.h>

using namespace std;
// O(t * n)
bool check(vector<int> &arr, int skip) {
    vector<int> temp;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] == skip) {
            continue;
        }
        temp.push_back(arr[i]);
    }

    int l = 0;
    int r = temp.size() - 1;
    while (l < r) {
        if (temp[l] != temp[r]) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}

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

        int l = 0;
        int r = arr.size() - 1;
        bool valid = true;
        while (l < r) {
            if (arr[l] != arr[r]) {
                valid = false;
                valid |= check(arr, arr[l]);
                valid |= check(arr, arr[r]);
                break;
            }

            l++;
            r--;
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}