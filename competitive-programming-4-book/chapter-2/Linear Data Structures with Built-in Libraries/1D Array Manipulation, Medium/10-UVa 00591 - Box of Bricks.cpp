#include <bits/stdc++.h>

using namespace std;
// https://onlinejudge.org/external/5/591.pdf
// O(t * n)
int main () {
    int n;
    int cnt = 1;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> arr(n);
        int sum = 0;
        for (int &num : arr) {
            cin >> num;
            sum += num;
        }

        int amt = sum / arr.size();
        int res = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > amt) {
                res += arr[i] - amt;
            }
        }
        cout << "Set #" << cnt << endl;
        cout << "The minimum number of moves is " << res << "." << endl;
        cout << endl;
        cnt++;
    }
}