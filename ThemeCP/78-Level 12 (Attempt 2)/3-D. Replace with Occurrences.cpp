#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2137/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> counter;
        unordered_map<int, vector<int>> numCnt;
        int next = 1;
        for (int &num : arr) {
            cin >> num;
            counter[num]++;
            if (counter[num] == num) {
                counter[num] = 0;
                numCnt[num].push_back(next++);
            }
        }

        int currCnt = n;
        for (auto &m : numCnt) {
            currCnt -= m.second.size() * m.first;
        }

        if (currCnt != 0) {
            cout << -1 << endl;
            continue;
        }
        counter.clear();
        for (int i = 0 ; i < arr.size(); i++) {
            cout << numCnt[arr[i]].back() << " ";
            counter[arr[i]]++;
            if (counter[arr[i]] == arr[i]) {
                numCnt[arr[i]].pop_back();
                counter[arr[i]] = 0;
            }
        }
        cout << endl;
    }
}