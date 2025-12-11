#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1972/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr1(n);
        vector<int> arr2(n);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        for (int i = 0 ; i < arr2.size(); i++) {
            while (arr1[i] > arr2[i]) {
                arr1.push_front(0);
            }
        }
        cout << arr1.size() - arr2.size() << endl;
    }
}