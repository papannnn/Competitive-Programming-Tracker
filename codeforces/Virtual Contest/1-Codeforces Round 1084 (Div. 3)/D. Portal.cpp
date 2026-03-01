#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    int cnt = 0;
    while (t--) {
        cnt++;
        int n, x, y;
        cin >> n >> x >> y;
        
        deque<int> arr1;
        deque<int> arr2;
        deque<int> arr3;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (i < x || i >= y) {
                arr1.push_back(num);
                continue;
            }

            if (i >= x && i < y) {
                arr2.push_back(num);
                continue;
            }
        }

        int minVal = 1e9;
        for (int i = 0 ; i < arr2.size(); i++) {
            minVal = min(minVal, arr2[i]);
        }

        while (!arr2.empty() && arr2[0] != minVal) {
            int temp = arr2[0];
            arr2.pop_front();
            arr2.push_back(temp);
        }

        int val = -1;
        for (int i = 0 ; i < arr1.size() && !arr2.empty(); i++) {
            if (arr1[i] > arr2[0]) {
                val = arr1[i];
                break;
            }
        }

        bool flag = val != -1;
        while (!arr1.empty() && !arr2.empty() && flag) {
            int temp = arr1.back();
            arr1.pop_back();
            arr3.push_front(temp);
            if (temp == val) {
                flag = false;
            }
        }

        for (int &num : arr1) {
            cout << num << " ";
        }

        for (int &num : arr2) {
            cout << num << " ";
        }

        for (int &num : arr3) {
            cout << num << " ";
        }

        cout << endl;
    }
}
