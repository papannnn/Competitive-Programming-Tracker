#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for (int &num : arr) {
        cin >> num;
        if (num % 2) {
            odd++;
        } else {
            even++;
        }

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}