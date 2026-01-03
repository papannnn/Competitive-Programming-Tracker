#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1770/A
// O(t * m + n)
int main () {
    int t;
    cin >> t;
    int cnt = 1;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n);
        vector<int> arr2(m);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        for (int i = 0 ; i < arr2.size(); i++) {
            int minVal = arr1[0];
            int idx = 0;
            for (int j = 0 ; j < arr1.size(); j++) {
                if (arr1[j] < minVal) {
                    minVal = arr1[j];
                    idx = j;
                }
            }
            arr1[idx] = arr2[i];
        }

        long long sum = 0;
        for (int &num : arr1) {
            sum += num;
        }
        cout << sum << endl;
    }
}