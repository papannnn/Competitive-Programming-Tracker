#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2117/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> res;
        bool head = true;
        while (n) {
            if (head) {
                res.push_back(n--);
            } else {
                res.push_front(n--);
            }

            head = !head;
        }

        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}