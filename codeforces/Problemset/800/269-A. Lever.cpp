#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2131/A
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arrA(n);
        vector<int> arrB(n);
        for (int &num : arrA) {
            cin >> num;
        }

        for (int &num : arrB) {
            cin >> num;
        }

        bool found = true;
        int res = 0;
        while (found) {
            found = false;
            for (int i = 0 ; i < arrA.size(); i++) {
                if (arrA[i] > arrB[i] && !found) {
                    arrA[i]--;
                    found = true;
                } else if (arrA[i] < arrB[i]){
                    arrA[i]++;
                }
            }
            
            res++;
        }
        cout << res << endl;
    }
}