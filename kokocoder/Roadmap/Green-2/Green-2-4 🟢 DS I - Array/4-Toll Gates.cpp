#include <bits/stdc++.h>

using namespace std;
// O(m)
int main () {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> arr(m);
    int left = 0;
    int right = 0;
    for (int &num : arr) {
        cin >> num;
        if (num < x) {
            left++;
        } else {
            right++;
        }
    }
    cout << min(left, right) << endl;
}