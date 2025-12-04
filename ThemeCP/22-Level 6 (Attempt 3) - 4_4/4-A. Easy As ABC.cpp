#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1906/A
// O(1)

struct PairHash {
    size_t operator()(const pair<int,int>& p) const noexcept {
        return ((size_t)p.first << 32) ^ (size_t)p.second;
    }
};


void traverse(int x, int y, string curr, string &res, vector<vector<char>> &arr, unordered_set<pair<int, int>, PairHash> visited) {
    if (x == -1 || y == - 1) {
        return;
    }

    if (x == 3 || y == 3) {
        return;
    }

    if (visited.find({x, y}) != visited.end()) {
        return;
    }
    visited.insert({x, y});

    curr += arr[x][y];
    if (curr.size() == 3) {
        if (curr.compare(res) < 0) {
            res = curr;
        }
        return;
    }

    traverse(x, y + 1, curr, res, arr, visited);
    traverse(x + 1, y + 1, curr, res, arr, visited);
    traverse(x + 1, y, curr, res, arr, visited);
    traverse(x - 1, y, curr, res, arr, visited);
    traverse(x - 1, y - 1, curr, res, arr, visited);
    traverse(x, y - 1, curr, res, arr, visited);
    traverse(x - 1, y + 1, curr, res, arr, visited);
    traverse(x + 1, y - 1, curr, res, arr, visited);
    visited.erase({x, y});
}

int main () {
    vector<vector<char>> arr;
    for (int i = 0 ; i < 3; i++) {
        vector<char> temp;
        for (int j = 0 ; j < 3; j++) {
            char c;
            cin >> c;
            temp.push_back(c);
        }
        arr.push_back(temp);
    }

    string res = "CCC";
    unordered_set<pair<int, int>, PairHash> visited;
    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            traverse(i, j, "", res, arr, visited);
            visited.erase({i, j});
        }
    }
    cout << res << endl;
}
