#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/255/A
// O(t * n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(3);
    int ptr = 0;
    while (n--) {
        int num;
        cin >> num;
        arr[ptr] += num;
        ptr++;
        if (ptr == 3) {
            ptr = 0;
        }
    }

    if (arr[0] > arr[1] && arr[0] > arr[2]) {
        cout << "chest" << endl;
    } else if (arr[1] > arr[0] && arr[1] > arr[2]) {
        cout << "biceps" << endl;
    } else {
        cout << "back" << endl;
    }
}