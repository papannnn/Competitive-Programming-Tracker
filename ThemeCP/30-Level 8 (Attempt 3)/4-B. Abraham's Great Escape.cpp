#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2155/B
// O(t * n * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (k == n * n - 1) {
            cout << "NO" << endl;
            continue;
        }
        int l = n * n - k;

        cout << "YES" << endl;

        vector<vector<char>> arr;
        for (int i = 0; i < n ; i++) {
            vector<char> temp;
            for (int j = 0 ; j < n; j++) {
                temp.push_back('#');
            }
            arr.push_back(temp);
        }

        if (k > 0) {
            bool right = true;
            int ptrX = 1;
            int ptrY = 0;
            if (n % 2) {
                arr[0][0] = 'L';
            } else {
                arr[0][n - 1] = 'R';
                right = false;
                ptrX = n - 2;
            }
            k--;
            
            while (k--) {
                if (ptrX == n - 1 && right) {
                    arr[ptrY][ptrX] = 'L';
                    if (k) {
                        k--;
                        right = !right;
                        ptrY++;
                        arr[ptrY][ptrX] = 'U';
                        ptrX--;
                    }
                    
                    continue;
                }

                if (ptrX == 0 && !right) {
                    arr[ptrY][ptrX] = 'R';
                    if (k) {
                        k--;
                        right = !right;
                        ptrY++;
                        arr[ptrY][ptrX] = 'U';
                        ptrX++;
                    }
                    continue;
                }

                if (right) {
                    arr[ptrY][ptrX] = 'L';
                    ptrX++;
                } else {
                    arr[ptrY][ptrX] = 'R';
                    ptrX--;
                }
            }
        }

        if (arr[n - 1][n - 1] == '#') {
            int ptrX = n - 1;
            int ptrY = n - 1;
            bool right = false;
            while (l--) {
                if (ptrX == n - 1 && ptrY == n - 1) {
                    arr[ptrY][ptrX] = 'L';
                    ptrX--;
                    continue;
                }
                if (ptrX == n - 1 && right) {
                    arr[ptrY][ptrX] = 'L';
                    if (l) {
                        l--;
                        right = !right;
                        ptrY--;
                        arr[ptrY][ptrX] = 'D';
                        ptrX--;
                    }
                    
                    continue;
                }

                if (ptrX == 0 && !right) {
                    arr[ptrY][ptrX] = 'R';
                    if (l) {
                        l--;
                        right = !right;
                        ptrY--;
                        arr[ptrY][ptrX] = 'D';
                        ptrX++;
                    }
                    continue;
                }

                if (right) {
                    arr[ptrY][ptrX] = 'L';
                    ptrX++;
                } else {
                    arr[ptrY][ptrX] = 'R';
                    ptrX--;
                }
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}
