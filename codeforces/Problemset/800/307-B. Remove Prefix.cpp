#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1714/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr(n);
        unordered_map<int, int> mapping;
        int mult = 0;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
            if (mapping[num] == 2) {
                mult++;
            }
        }

        int res = 0;
        while (mult) {
            int num = arr[0];
            if (mapping[num] == 2) {
                mult--;
            }
            arr.pop_front();
            mapping[num]--;
            res++;
        }
        cout << res << endl;
    }
}