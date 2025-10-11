#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/34/A
// O
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    int diff = 1e8;
    int a = -1;
    int b = -1;
    for (int i = 0 ; i < arr.size(); i++) {
        int next = i == arr.size() - 1 ? 0 : i + 1;
        if (abs(arr[i] - arr[next]) < diff) {
            diff = abs(arr[i] - arr[next]);
            a = i + 1;
            b = next + 1;
        }
    }
    cout << a << " " << b << endl;
}