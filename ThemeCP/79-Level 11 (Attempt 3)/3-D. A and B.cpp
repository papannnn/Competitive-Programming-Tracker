#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2149/D
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s.length() <= 3) {
            cout << 0 << endl;
            continue;
        }

        vector<int> posA;
        vector<int> posB;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == 'a') {
                posA.push_back(i);
            } else {
                posB.push_back(i);
            }
        }

        if (posA.size() == 1) {
            cout << 0 << endl;
            continue;
        }
    
        if (posB.size() == 1) {
            cout << 0 << endl;
            continue;
        }

        int cnt = 1;
        long long resA = 0;
        for (int i = posA.size() / 2 - 1; i >= 0; i--) {
            resA += abs(posA[posA.size() / 2] - posA[i]) - cnt;
            cnt++;
        }

        cnt = 1;
        for (int i = posA.size() / 2 + 1; i < posA.size(); i++) {
            resA += abs(posA[posA.size() / 2] - posA[i]) - cnt;
            cnt++;
        }
        
        cnt = 1;
        long long resB = 0;
        for (int i = posB.size() / 2 - 1; i >= 0; i--) {
            resB += abs(posB[posB.size() / 2] - posB[i]) - cnt;
            cnt++;
        }

        cnt = 1;
        for (int i = posB.size() / 2 + 1; i < posB.size(); i++) {
            resB += abs(posB[posB.size() / 2] - posB[i]) - cnt;
            cnt++;
        }
        cout << min(resA, resB) << endl;
    }
}