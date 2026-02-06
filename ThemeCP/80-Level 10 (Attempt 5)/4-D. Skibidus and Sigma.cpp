#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2065/D
// O(t * n * m log n * m)

struct Val {
    int idx;
    long long tot;
    long long head;
};

bool compareVal(const Val &a, const Val &b)
{
    if (a.tot == b.tot) {
        return a.head > b.head;
    }
    return a.tot > b.tot;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (vector<int> &temp : arr) {
            for (int &num : temp) {
                cin >> num;
            }
        }

        vector<Val> temp;
        for (int i = 0 ; i < n ; i++) {
            long long tot = 0;
            for (int j = 0; j < arr[i].size(); j++) {
                tot += arr[i][j];
            }
            
            Val val;
            val.idx = i;
            val.tot = tot;
            val.head = arr[i][0];
            temp.push_back(val);
        }

        sort(temp.begin(), temp.end(), compareVal);
        long long res = 0;
        long long prefix = 0;
        for (int i = 0 ; i < temp.size(); i++) {
            for (int j = 0; j < m; j++) {
                prefix += arr[temp[i].idx][j];
                res += prefix;
            }
        }
        cout << res << endl;
    }
}