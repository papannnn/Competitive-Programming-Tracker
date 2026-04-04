#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    vector<int> arr3(n);
    for (int &num : arr1) {
        cin >> num;
    }

    for (int &num : arr2) {
        cin >> num;
    }

    for (int &num : arr3) {
        cin >> num;
    }

    vector<int> flag(n + 1);
    for (int i = 0 ; i < n; i++) {
        flag[arr2[arr3[i] - 1]]++;
    }

    long long res = 0;
    for (int &num : arr1) {
        res += flag[num];
    }
    cout << res << endl;
}