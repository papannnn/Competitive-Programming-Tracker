#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/jollyjumpers
// O(t * n log n)
int main () {
    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        vector<int> res;
        for (int i = 0; i < arr.size() - 1; i++) {
            res.push_back(abs(arr[i] - arr[i + 1]));
        }
        
        sort(res.begin(), res.end());
        int num = 1;
        bool valid = true;
        for (int i = 0; i < res.size(); i++) {
            valid &= num == res[i];
            num++;
        }

        cout << (valid ? "Jolly" : "Not Jolly") << endl;
    }
}