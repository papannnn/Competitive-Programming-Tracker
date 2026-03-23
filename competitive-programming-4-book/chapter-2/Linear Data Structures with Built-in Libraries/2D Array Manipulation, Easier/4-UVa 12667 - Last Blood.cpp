#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12667
// O(m)
int main () {
    int n, t, m;
    cin >> n >> t >> m;
    vector<vector<bool>> teamSubmission(t + 1, vector<bool>(n + 1));
    vector<int> teamLast(n + 1);
    vector<int> timeLast(n + 1);
    while (m--) {
        int time, team;
        char problem;
        string verdict;
        cin >> time >> team >> problem >> verdict;
        if (verdict == "No") {
            continue;
        }

        if (teamSubmission[team][problem - 'A']) {
            continue;
        }

        teamSubmission[team][problem - 'A'] = true;
        teamLast[problem - 'A'] = team;
        timeLast[problem - 'A'] = time;
    }

    for (int i = 0; i < n; i++) {
        char c = i + 'A';
        cout << c << " ";
        if (teamLast[i] == 0) {
            cout << "- -" << endl;
        } else {
            cout << timeLast[i] << " " << teamLast[i] << endl;
        }
    }
}