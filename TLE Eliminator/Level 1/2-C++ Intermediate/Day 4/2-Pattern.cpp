#include <bits/stdc++.h>

using namespace std;
// https://www.geeksforgeeks.org/problems/pattern/1
// O(n ^ 2)

class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j + i < n - 1; j++) {
                cout << " ";
            }
    
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    
        for (int i = n - 1 ; i >= 0; i--) {
            for (int j = 0; j + i < n - 1; j++) {
                cout << " ";
            }
    
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

