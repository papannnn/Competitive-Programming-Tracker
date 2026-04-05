#include <bits/stdc++.h>

using namespace std;
// O(m + n * n log n * n)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> res(n + 1);

    while (m--) {
        int a, b;
        cin >> a >> b;
        res[a].push_back(b);
        res[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        cout << res[i].size() << " ";
        sort(res[i].begin(), res[i].end());
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        
        cout << endl;
    }
}