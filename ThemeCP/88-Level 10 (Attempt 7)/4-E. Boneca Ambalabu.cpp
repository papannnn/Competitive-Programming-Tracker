#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2094/E
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<long long> mapping1(32);
        vector<long long> mapping0(32);
        for (int &num : arr) {
            cin >> num;
            for (int i = 0; i <= 30; i++) {
                int val = pow(2, i);
                mapping1[i] += (num & val) > 0;
                mapping0[i] += (num & val) == 0;
            }
        }
        int curr = -1;
        long long maxVal = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            long long tot = 0;
            int data = arr[i];
            for (int i = 0; i <= 30; i++) {
                int val = pow(2, i);
                int bit = (data & val);
                if (!bit) {
                    continue;
                }

                tot -= (mapping1[i]) * val;
                tot += mapping0[i] * val;
            }
            
            if (tot > maxVal || curr == -1) {
                curr = arr[i];
                maxVal = tot;
            }
        }

        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            res += arr[i] ^ curr;
        }
        cout << res << endl;
    }
}