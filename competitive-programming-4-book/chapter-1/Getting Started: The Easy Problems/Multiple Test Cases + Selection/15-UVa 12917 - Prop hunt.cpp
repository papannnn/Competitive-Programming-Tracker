#include <iostream>

using namespace std;
int main() {
    int p, h, o;
    while (cin >> p >> h >> o) {
        if (o - p >= h) {
            cout << "Props win!" << endl;
        } else {
            cout << "Hunters win!" << endl;
        }
    }
}