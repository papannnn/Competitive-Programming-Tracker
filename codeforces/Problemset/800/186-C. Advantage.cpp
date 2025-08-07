#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1760/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> mapping;
        int biggest = 0;
        int secondBiggest = 0;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
            if (num > biggest) {
                secondBiggest = biggest;
                biggest = num;
            } else if (num > secondBiggest) {
                secondBiggest = num;
            }
        }

        for (int &num : arr) {
            if (num != biggest) {
                cout << num - biggest << " ";
            } else {
                cout << num - secondBiggest << " ";
            }
        }
        cout << endl;
    }
}