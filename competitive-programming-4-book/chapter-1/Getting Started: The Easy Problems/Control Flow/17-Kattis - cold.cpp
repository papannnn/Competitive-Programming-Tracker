#include <iostream>

using namespace std;
int main () {
    int t;
    cin >> t;
    int res = 0;
    while (t--) {
        int n;
        cin >> n;
        if (n < 0) {
            res++;
        }
    }

    cout << res << endl;
}