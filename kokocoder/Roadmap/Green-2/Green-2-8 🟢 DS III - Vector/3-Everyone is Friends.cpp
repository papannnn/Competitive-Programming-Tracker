#include <bits/stdc++.h>

using namespace std;
// O(m * k * k)
int main () {
    int n, m;
    cin >> n >> m;
    vector<set<int>> person(n + 1);
    vector<vector<int>> party;
    while (m--) {
        int k;
        cin >> k;
        vector<int> temp;
        while (k--) {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        party.push_back(move(temp));
    }

    for (int i = 0 ; i < party.size(); i++) {
        for (int j = 0; j < party[i].size(); j++) {
            for (int k = 0; k < party[i].size(); k++) {
                person[party[i][j]].insert(party[i][k]);
            }
        }
    }

    bool valid = true;
    for (int i = 1; i <= n; i++) {
        valid &= person[i].size() == n;
    }
    cout << (valid ? "Yes" : "No") << endl;
}