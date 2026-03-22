#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/pivot
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    int maxVal = 0;
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxVal && i + 1 == arr[i]) {
            res++;
        }

        maxVal = max(maxVal, arr[i]);
    }
    cout << res;
}