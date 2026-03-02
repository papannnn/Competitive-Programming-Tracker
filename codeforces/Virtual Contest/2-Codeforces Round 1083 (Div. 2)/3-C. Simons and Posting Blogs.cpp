#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2205/problem/C
// O(t * n log n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<vector<int>> blog;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<int> temp;
            set<int> f;
            for (int j = 0; j < m; j++) {
                int val;
                cin >> val;
                temp.push_back(val);
            }
            reverse(temp.begin(), temp.end());
            vector<int> temp1;
            for (int j = 0; j < m; j++) {
                if (f.find(temp[j]) == f.end()) {
                    temp1.push_back(temp[j]);
                    f.insert(temp[j]);
                }
            }
            blog.push_back(move(temp1));
        }

        set<int> flag;
        vector<int> res;
        while (!blog.empty()) {
            sort(blog.begin(), blog.end());
            bool did = false;
            for (int i = 0; i < blog[0].size(); i++) {
                flag.insert(blog[0][i]);
                res.push_back(blog[0][i]);
                did = true;
            }

            blog.pop_front();
            if (!did) {
                continue;
            }
            for (int i = 0 ; i < blog.size(); i++) {
                vector<int> temp;
                for (int j = 0; j < blog[i].size(); j++) {
                    if (flag.find(blog[i][j]) != flag.end()) {
                        continue;
                    }
                    temp.push_back(blog[i][j]);
                }
                blog[i] = move(temp);
            }
        }

        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}