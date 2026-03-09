#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
// O(n log n)
int main () {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int &num : arr1) {
        cin >> num;
    }

    for (int &num : arr2) {
        cin >> num;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    bool valid = true;
    for (int i = 0; i < arr1.size(); i++) {
        valid &= arr1[i] == arr2[i];
    }

    cout << (valid ? "yes" : "no") << endl;
}