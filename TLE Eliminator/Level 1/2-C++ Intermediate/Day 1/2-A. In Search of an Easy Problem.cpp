#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1030/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    bool hard = false;
    for (int &num : arr) {
        cin >> num;
        hard |= num == 1;
    }
    cout << (hard ? "HARD" : "EASY") << endl;
}