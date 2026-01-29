#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/379/problem/A
// O(t * a)
int main () {
    int a, b;
    cin >> a >> b;
    
    int res = 0;
    int dead = 0;
    while (a--) {
        res++;
        dead++;
        if (dead == b) {
            a++;
            dead = 0;
        }
    }
    cout << res << endl;
    
}