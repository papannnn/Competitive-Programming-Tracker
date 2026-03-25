#include <bits/stdc++.h>

using namespace std;
// O(1)
// https://open.kattis.com/problems/mjehuric
int main () {
    vector<int> arr(5);
    for (int &num : arr) {
        cin >> num;
    }

    for (int i = 0; i < arr.size(); i++) {
        bool sorted = true;
        for (int j = 0; j < arr.size() - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                sorted = false;
                for (int &num : arr) {
                    cout << num << " ";
                }
                cout << endl;
            }
        }

        if (sorted) {
            break;
        }
    }
}