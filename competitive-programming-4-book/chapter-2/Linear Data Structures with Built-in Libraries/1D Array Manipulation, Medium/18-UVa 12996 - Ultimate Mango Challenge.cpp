#include <bits/stdc++.h>

using namespace std;
// https://onlinejudge.org/external/129/12996.pdf
// O(t * n)
int main () {
    int t;
    cin >> t;
    int c = 1;
    while (t--) {
        int n, l;
        cin >> n >> l;
        vector<int> mango(n);
        vector<int> limit(n);
        int tot = 0;
        for (int &num : mango) {
            cin >> num;
            tot += num;
        }

        for (int &num : limit) {
            cin >> num;
        }

        bool valid = tot <= l;
        for (int i = 0 ; i < n; i++) {
            valid &= mango[i] <= limit[i];
        }

        cout << "Case " << c << ": " << (valid ? "Yes" : "No") << endl;
        c++;
    }
}