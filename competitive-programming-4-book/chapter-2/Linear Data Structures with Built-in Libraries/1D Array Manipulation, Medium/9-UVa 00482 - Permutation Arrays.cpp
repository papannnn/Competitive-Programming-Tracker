#include <bits/stdc++.h>

using namespace std;
// https://onlinejudge.org/external/4/482.pdf
// O(t * n)
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string _;
        getline(cin, _);
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);
        stringstream ss1(s2);
        
        stringstream ss(s1);
        string temp;
        vector<int> idxArr;
        while (getline(ss, temp, ' ')) {
            int idx = stoi(temp);
            idxArr.push_back(idx);
        }
        
        
        vector<string> valArr(idxArr.size());
        int idx = 0;
        while (getline(ss1, temp, ' ')) {
            valArr[idxArr[idx] - 1] = temp;
            idx++;
        }

        for (string &idx : valArr) {
            cout << idx << endl;
        }

        if (t > 0) {
            cout << endl;
        }
    }
}