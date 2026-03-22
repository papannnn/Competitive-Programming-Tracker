#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/divideby100
// O(s1 + s2)
int main () {
    string s1, s2;
    cin >> s1;
    cin >> s2;

    vector<char> arr;
    for (int i = 0 ; i < s1.length(); i++) {
        arr.push_back(s1[i]);
    }

    int ptr = s1.length() - 1;
    int cnt = s2.length() - 1;
    while (cnt && !arr.empty() && arr.back() == '0') {
        cnt--;
        arr.pop_back();
    }

    if (cnt >= arr.size()) {
        cnt -= arr.size();
        cout << "0.";
        while (cnt--) {
            cout << 0;
        }
        for (char &c : arr) {
            cout << c;
        }
        return 0;
    }

    for (int i = 0 ; i < arr.size(); i++) {
        if (i == arr.size() - cnt) {
            cout << ".";
        }
        cout << arr[i];
    }
}