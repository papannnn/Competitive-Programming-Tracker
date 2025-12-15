#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2002/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> alice(n);
        deque<int> bob(n);
        for (int &num : alice) {
            cin >> num;
        }

        for (int &num : bob) {
            cin >> num;
        }

        bool valid = true;
        while (!alice.empty()) {
            bool found = (bob[0] == alice[0] 
                || bob[0] == alice[alice.size() - 1]) 
                && (bob[bob.size() - 1] == alice[0] 
                || bob[bob.size() - 1] == alice[alice.size() - 1]);
            if (!found) {
                valid = false;
                break;
            }

            if (bob[0] == alice[0]) {
                bob.pop_front();
                alice.pop_front();
            } else {
                bob.pop_front();
                alice.pop_back();
            }
        }
        cout << (valid ? "Bob" : "Alice") << endl;
    }
}
