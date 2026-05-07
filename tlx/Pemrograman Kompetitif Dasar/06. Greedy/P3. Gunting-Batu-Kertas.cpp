#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    int g1 = 0;
    int b1 = 0;
    int k1 = 0;
    
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'G') {
            g1++;
        }

        if (s1[i] == 'B') {
            b1++;
        }
        
        if (s1[i] == 'K') {
            k1++;
        }
    }

    int g2 = 0;
    int b2 = 0;
    int k2 = 0;
    for (int i = 0; i < n; i++) {
        if (s2[i] == 'G') {
            g2++;
        }

        if (s2[i] == 'B') {
            b2++;
        }
        
        if (s2[i] == 'K') {
            k2++;
        }
    }

    int res = 0;
    res += min(g1, k2);
    res += min(b1, g2);
    res += min(k1, b2);
    cout << res << endl;
}