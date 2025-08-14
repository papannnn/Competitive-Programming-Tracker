#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2000/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 2);
        int num;
        cin >> num;
        arr[num]++;
        n--;
        bool valid = true;
        while (n--) {
            cin >> num;
            if (!arr[num - 1] && !arr[num + 1]) {
                valid = false;
            }
            arr[num]++;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}