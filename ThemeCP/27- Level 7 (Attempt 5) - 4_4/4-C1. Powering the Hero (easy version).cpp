#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/C1
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        vector<int> deck;
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 0) {
                if (!deck.empty()) {
                    res += deck[deck.size() - 1];
                    deck.pop_back();
                }
                continue;
            }

            deck.push_back(arr[i]);
            sort(deck.begin(), deck.end());
        }
        cout << res << endl;
    }
}