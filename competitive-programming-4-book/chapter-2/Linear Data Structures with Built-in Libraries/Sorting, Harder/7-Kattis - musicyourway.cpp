#include <bits/stdc++.h>

using namespace std;
// O(n log n * k)
// https://open.kattis.com/problems/musicyourway
int main () {
    string categories;
    getline(cin, categories);
    stringstream str(categories);
    string category;
    vector<string> categoryArr;
    while (getline(str, category, ' ')) {
        categoryArr.push_back(category);
    }

    int n;
    cin >> n;
    vector<map<string, string>> arr(n);
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < categoryArr.size(); j++) {
            string val;
            cin >> val;
            arr[i][categoryArr[j]] = val;
        }
    }
    
    int k;
    cin >> k;
    bool first = true;
    while (k--) {
        string category;
        cin >> category;
        auto pos = find(categoryArr.begin(), categoryArr.end(), category);
        stable_sort(arr.begin(), arr.end(), [&category](const map<string, string> &a, const map<string, string> &b) {
            return *(a.find(category)) < *(b.find(category));
        });

        if (!first) {
            cout << endl;
        }
        cout << categories << endl;
        first = false;
        for (auto &a : arr) {
            for (int j = 0; j < categoryArr.size(); j++) {
                cout << a[categoryArr[j]] << " ";
            }
            cout << endl;
        }
    }
}