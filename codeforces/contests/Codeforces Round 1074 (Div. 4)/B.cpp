#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxVal = 0;
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
        }
        cout << maxVal * n << endl;
    }   
}