#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11933
// O(t * log10(n))
int main () {
    long long n;
    while (true) {  
        cin >> n;
        if (n == 0) {
            break;
        }

        long long res[] = {0, 0};
        bool flag = false;
        for (long long x = 1, i = 0; i <= 32; i++) {
            if (n & x) {
                res[flag] |= (n & x);
                flag = !flag; 
            }
            x = x << 1;
        }
        cout << res[0] << " " << res[1] << endl;
    }
}