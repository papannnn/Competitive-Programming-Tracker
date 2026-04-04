#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> arr[i];
    }

    int ptr = n;
    int res = 0;
    while (ptr != 1) {
        ptr = arr[ptr];
        res++;
    }
    cout << res << endl;
}