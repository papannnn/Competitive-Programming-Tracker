#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1907/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        deque<char> queue;
        int upper = 0;
        int lower = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'b') {
                lower++;
                continue;
            }

            if (s[i] == 'B') {
                upper++;
                continue;
            }

            if (islower(s[i]) && lower) {
                lower--;
                continue;
            } else if (isupper(s[i]) && upper){
                upper--;
                continue;
            }
            queue.push_front(s[i]);
        }
        string res(queue.begin(), queue.end());
        cout << res << endl;
    }
}