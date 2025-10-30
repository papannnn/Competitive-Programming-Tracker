#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1702/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_set<char> flag;
        int res = 1;
        for (int i = 0 ; i < s.length(); i++) {
            if (flag.find(s[i]) == flag.end()) {
                if (flag.size() == 3) {
                    res++;
                    flag.clear();
                }
                flag.insert(s[i]);
            }
        }
        
        cout << res << endl;
    }
}