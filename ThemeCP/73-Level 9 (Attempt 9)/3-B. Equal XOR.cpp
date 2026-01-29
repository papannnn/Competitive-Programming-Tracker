#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1944/problem/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr1(n);
        unordered_map<int, int> mapping1;
        vector<int> double1;
        for (int &num : arr1) {
            cin >> num;
            mapping1[num]++;
            if (mapping1[num] == 2) {
                double1.push_back(num);
            }
        }

        vector<int> arr2(n);
        unordered_map<int, int> mapping2;
        vector<int> double2;
        for (int &num : arr2) {
            cin >> num;
            mapping2[num]++;
            if (mapping2[num] == 2) {
                double2.push_back(num);
            }
        }

        if (k * 2 == n) {
            for (int &num : arr1) {
                cout << num << " ";
            }
            cout << endl;
            for (int &num : arr2) {
                cout << num << " ";
            }
            cout << endl;
            continue;
        }
        
        k *= 2;
        vector<int> res1;
        vector<int> res2;
        while (k) {
            if (double1.size() && double2.size()) {
                res1.push_back(double1.back());
                res1.push_back(double1.back());
                res2.push_back(double2.back());
                res2.push_back(double2.back());
                mapping1.erase(double1.back());
                mapping2.erase(double2.back());
                double1.pop_back();
                double2.pop_back();
                k -= 2;
                continue;
            }

            for (auto &m : mapping1) {
                if (k == 0) {
                    break;
                }
                if (m.second == 1) {
                    res1.push_back(m.first);
                    res2.push_back(m.first);
                    k--;
                }
            }
        }

        for (int &num : res1) {
            cout << num << " ";
        }
        cout << endl;
        for (int &num : res2) {
            cout << num << " ";
        }
        cout << endl;
    }
}