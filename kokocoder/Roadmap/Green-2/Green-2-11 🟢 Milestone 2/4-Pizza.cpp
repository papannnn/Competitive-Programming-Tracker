#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<bool> pizza(360);
    int curr = 0;
    pizza[curr] = true;
    while (n--) {
        int pos;
        cin >> pos;
        curr += pos;
        curr = curr % 360;
        pizza[curr] = true;
    }

    int maxVal = 0;
    int val = 0;
    for (int i = 0; i <= 360; i++) {
        val++;
        if (pizza[i]) {
            maxVal = max(maxVal, val);
            val = 0;
        }
    }
    cout << max(maxVal, val) << endl;
}