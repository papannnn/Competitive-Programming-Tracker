#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1804/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int patient, dosePerPack, lifetime, patientWait;
        cin >> patient >> dosePerPack >> lifetime >> patientWait;

        vector<int> arr(patient);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 1;
        int stock = dosePerPack - 1;
        int lastTime = arr[arr.size() - 1];
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (stock > 0) {
                int currTime = min(lastTime, arr[i] + patientWait);
                if (lastTime - currTime <= lifetime) {
                    stock--;
                } else {
                    res++;
                    stock = dosePerPack - 1;
                    lastTime = arr[i];
                }
            } else {
                res++;
                stock = dosePerPack - 1;
                lastTime = arr[i];
            }
        }
        cout << res << endl;
    }
}