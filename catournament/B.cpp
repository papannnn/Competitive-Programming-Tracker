#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<long long> stk;
    n--;
    long long num;
    cin >> num;
    stk.push_back(num);
    while (n--) {
        cin >> num;
        if (stk.back() == num) {
            stk[stk.size() - 1] *= 2;
            while (true) {
                if (stk.size() == 1) {
                    break;
                }

                if (stk[stk.size() - 1] == stk[stk.size() - 2]) {
                    stk.pop_back();
                    stk[stk.size() - 1] *= 2;
                } else {
                    break;
                }
            }
        } else {
            stk.push_back(num);
        }
    }
    cout << (stk.size() == 1 ? "YA" : "TIDAK") << endl;
}