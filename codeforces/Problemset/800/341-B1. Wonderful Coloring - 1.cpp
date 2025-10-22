#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1551/B1
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> arr(26);
        for (int i = 0 ; i < s.length(); i++){ 
            if (arr[s[i] - 'a'] == 2) {
                continue;
            }
            arr[s[i] - 'a']++;
        }
        
        int tot = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            tot += arr[i];
        }

        cout << tot / 2 << endl;
    }
}