#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1622/B
// O(t * n log n)
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

        string s;
        cin >> s;
        vector<int> like;
        vector<int> dislike;
        for (int i = 0 ; i < arr.size(); i++) {
            if (s[i] == '1') {
                like.push_back(arr[i]);
            } else {
                dislike.push_back(arr[i]);
            }
        }

        sort(like.begin(), like.end(), greater<int>());
        sort(dislike.begin(), dislike.end());
        int x = n;
        unordered_map<int, int> mapping;
        for (int i = 0 ; i < like.size(); i++) {
            mapping[like[i]] = x--;
        }

        x = 1;
        for (int i = 0 ; i < dislike.size(); i++) {
            mapping[dislike[i]] = x++;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            cout << mapping[arr[i]] << " ";
        }
        cout << endl;
    }
}