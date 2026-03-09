#include <bits/stdc++.h>

using namespace std;
// https://www.geeksforgeeks.org/problems/pattern-printing1347/1
// O(n)

// User function Template for C++
class Solution {
  public:
    void printPattern(int N) {
        // Write Your Code here
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << " ";
        }
    }
};

int main () {
    int n;
    cin >> n;
    Solution s;
    s.printPattern(n);
}