#include <bits/stdc++.h>

using namespace std;

void permute(int idx, string& s, vector<string> &arr, unordered_set<string> &memo) {
    if (idx == s.size()) {
        if (memo.find(s) == memo.end()) {
            arr.push_back(s);
            memo.insert(s);
        }
        return;
    }
    
    for (int i = idx ; i < s.length(); i++) {
        swap(s[idx], s[i]);
        permute(idx + 1, s, arr, memo);
        swap(s[idx], s[i]);
    }
}

int main () {
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> arr;
    unordered_set<string> memo;
    permute(0, s, arr, memo);
    sort(arr.begin(), arr.end());
    cout << arr[k - 1] << endl;
}