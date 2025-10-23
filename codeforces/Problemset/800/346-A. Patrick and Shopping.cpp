#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/599/A
// O(1)
int main () {
    int houseToShop1, houseToShop2, shopToShop;
    cin >> houseToShop1 >> houseToShop2 >> shopToShop;
    int opt1 = houseToShop1 + houseToShop1 + houseToShop2 + houseToShop2;
    int opt2 = houseToShop1 + shopToShop + houseToShop2;
    int opt3 = houseToShop1 + shopToShop + shopToShop + houseToShop1;
    int opt4 = houseToShop2 + shopToShop + shopToShop + houseToShop2;
    cout << min(opt1, min(opt2, min(opt3, opt4))) << endl;
}