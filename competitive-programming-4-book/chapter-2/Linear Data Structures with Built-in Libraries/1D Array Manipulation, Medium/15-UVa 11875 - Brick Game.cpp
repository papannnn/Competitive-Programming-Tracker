#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11875
// O(t * n)
int main () {
    int t;
    cin >> t;
    int cnt = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        cout << "Case " << cnt << ": " << arr[arr.size() / 2] << endl;
        cnt++;
    }
}