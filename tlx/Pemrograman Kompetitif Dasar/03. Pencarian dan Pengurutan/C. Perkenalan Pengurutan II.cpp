#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (string &s : arr) {
        cin >> s;
    }

    sort(arr.begin(), arr.end(), [](const string &a, const string &b) {
        if (a.length() != b.length()) {
            return a.size() < b.size();
        }
        return a < b;
    });
    for (string &s : arr) {
        cout << s << endl;
    }
}