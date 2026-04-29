#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (double &num : arr) {
        cin >> num;
    }
    sort(arr.begin(), arr.end());
    if (arr.size() % 2 == 0) {
        double res = (arr[arr.size() / 2] + arr[arr.size() / 2 - 1]) / 2;
        cout << fixed << setprecision(1) << res << endl;
    } else {
        double res = arr[arr.size() / 2];
        cout << fixed << setprecision(1) << res << endl;
    }
}