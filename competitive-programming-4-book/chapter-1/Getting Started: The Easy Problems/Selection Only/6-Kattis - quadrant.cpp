#include <iostream>

using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x > 0) {
        if (y > 0) {
            printf("1\n");
        } else {
            printf("4\n");
        }
    } else {
        if (y > 0) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
}