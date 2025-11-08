#include <bits/stdc++.h>

using namespace std;
// B. Following the String
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> memo(26);
        int n;
        cin >> n;
        while (n--) {
            int num;
            cin >> num;
            for (int i = 0 ; i < memo.size(); i++) {
                if (num == memo[i]) {
                    char c = i + 'a';
                    cout << c;
                    memo[i]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}