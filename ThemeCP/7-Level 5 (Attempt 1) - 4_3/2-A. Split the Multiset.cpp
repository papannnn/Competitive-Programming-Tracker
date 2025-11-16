#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1988/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        stack<int> stk;
        stk.push(n);

        int res = 0;
        while (!stk.empty() && stk.top() != 1) {
            int cnt = 0;

            int val = stk.top();
            stk.pop();
            if (val % 2) {
                int a = val / 2;
                int b = val / 2 + 1;

                if (a > 1) {
                    stk.push(a);
                }

                if (b > 1) {
                    stk.push(b);
                }

            } else {
                int a = val / 2;
                if (a > 1) {
                    stk.push(a);
                    stk.push(a);
                }
            }

            while (!stk.empty() && cnt < k - 2) {
                int val = stk.top();
                stk.pop();
                if (val % 2) {
                    int a = val / 2;
                    int b = val / 2 + 1;

                    if (a > 1) {
                        stk.push(a);
                    }

                    if (b > 1) {
                        stk.push(b);
                    }

                } else {
                    int a = val / 2;
                    if (a > 1) {
                        stk.push(a);
                        stk.push(a);
                    }
                }
                cnt++;
            }
            res++;
        }
        cout << res << endl;
    }
}
