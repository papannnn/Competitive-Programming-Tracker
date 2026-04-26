#include <bits/stdc++.h>

using namespace std;
long long M = 1000000007;
int main () {
    vector<vector<long long>> pascal(1001, vector<long long>(1001));
    pascal[0][0] = 1;
    for (int i = 1; i <= 1000; i++) {
        pascal[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pascal[i][j] = (pascal[i - 1][j - 1] % M) + (pascal[i - 1][j] % M) % M;
        }
    }
    
    long long n, a, b;
    cin >> n >> a >> b;
    long long res = 0;
    for (int i = a; i <= b; i++) {
        res += pascal[n][i];
        res = res % M;
    }
    cout << res << endl;
}