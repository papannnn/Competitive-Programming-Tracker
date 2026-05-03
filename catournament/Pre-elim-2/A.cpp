#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, l;
    cin >> n >> l;

    vector<bool> dayArr(400);

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while (l--) {
        int curr = 0;
        int day, month;
        cin >> day >> month;
        for (int i = 0; i < month; i++) {
            curr += arr[i];
        }

        curr += day;
        dayArr[curr] = true;
    }

    bool valid = false;
    for (int i = 1; i < dayArr.size() - 1; i++) {
        valid |= !dayArr[i] && dayArr[i - 1] && dayArr[i + 1];
    }
    cout << (valid ? "YA" : "TIDAK") << endl;
}