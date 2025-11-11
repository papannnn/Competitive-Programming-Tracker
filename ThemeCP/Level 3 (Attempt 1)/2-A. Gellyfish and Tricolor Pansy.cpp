#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2116/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int gellyfish, flower, gKnight, fKnight;
        cin >> gellyfish >> flower >> gKnight >> fKnight;

        int g = min(gellyfish, gKnight);
        int f = min(flower, fKnight);

        if (g >= f) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }
    }
}