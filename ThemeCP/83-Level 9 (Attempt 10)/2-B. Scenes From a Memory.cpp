#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1562/B
// O(t * k)

bool isPrime(int n) {
    bool valid = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            valid = false;
            break;
        }
    }
    return valid;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;

        if (k == 1) {
            cout << 1 << endl;
            cout << s << endl;
            continue;
        }

        bool found = false;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
                cout << 1 << endl;
                cout << s[i] << endl;
                found = true;
                break;
            }
        }

        if (found) {
            continue;
        }

        // 2 3 5 7
        cout << 2 << endl;
        for (int i = 0; i < s.length() && !found; i++) {
            for (int j = i + 1; j < s.length(); j++) {
                int digit = (s[i] - '0') * 10;
                digit += s[j] - '0';
                if (!isPrime(digit)) {
                    cout << digit << endl;
                    found = true;
                    break;
                }
            }
        }
    }
}