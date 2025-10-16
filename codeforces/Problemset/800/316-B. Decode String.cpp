#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1729/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<char> arr;
        while (n--) {
            char c;
            cin >> c;
            arr.push_back(c);
        }
        arr.push_back('a');

        string res = "";
        while (arr[0] != 'a') {
            string val = "";
            char c = arr[0];
            val += c;
            arr.pop_front();

            if (arr.size() >= 3 && arr[1] == '0' && arr[2] != '0') {
                val += arr[0];
                arr.pop_front();
                arr.pop_front();
            }
            
            res += stoi(val) - 1 + 'a';
        }
        cout << res << endl;
    }
}