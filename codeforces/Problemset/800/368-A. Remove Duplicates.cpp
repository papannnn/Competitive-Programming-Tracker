#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/978/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    vector<int> flag(1001);
    deque<int> res;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (flag[arr[i]]++ == 0) {
            res.push_front(arr[i]);
        }
    }

    cout << res.size() << endl;
    for (int &num : res) {
        cout << num << " ";
    }
    cout << endl;
}