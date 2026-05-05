#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<long long> arr1(n);
    vector<long long> arr2(n);
    for (long long &num : arr1) {
        cin >> num;
    }

    for (long long &num : arr2) {
        cin >> num;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<long long>());
    long long res = 0;
    for (int i = 0; i < arr1.size(); i++) {
        res += arr1[i] * arr2[i];
    }
    cout << res << endl;
}