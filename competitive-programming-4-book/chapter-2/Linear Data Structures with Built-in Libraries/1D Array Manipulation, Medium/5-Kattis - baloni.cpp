#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/baloni
// O(n)
int main () {
    vector<int> arr(1000001);
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        int num;
        cin >> num;
        if (arr[num] == 0) {
            arr[num - 1]++;
        } else {
            arr[num - 1]++;
            arr[num]--;
        }
    }

    long long res = 0;
    for (int i = 0; i <= 1000000; i++) {
        res += arr[i];
    }
    cout << res << endl;
}