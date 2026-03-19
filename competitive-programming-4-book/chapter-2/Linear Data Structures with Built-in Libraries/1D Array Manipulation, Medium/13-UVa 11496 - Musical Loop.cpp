#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11496
// O(t * n)
int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i == 0) {
                if ((arr[i] < arr.back() && arr[i] < arr[i + 1]) || (arr[i] > arr.back() && arr[i] > arr[i + 1])) {
                    res++;
                }
                continue;
            }

            if (i == arr.size() - 1) {
                if ((arr.back() < arr[0] && arr.back() < arr[i - 1]) || (arr.back() > arr[0] && arr.back() > arr[i - 1])) {
                    res++;
                }
                continue;
            }

            if ((arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) || (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
                res++;
            }
        }

        cout << res << endl;
    }
}