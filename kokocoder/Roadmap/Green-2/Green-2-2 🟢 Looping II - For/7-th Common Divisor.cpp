#include <bits/stdc++.h>

using namespace std;
// O(max(sqrt(a), sqrt(b)))
int main () {
    int a, b, k;
    cin >> a >> b >> k;
    
    deque<int> res;
    int cnt = 0;
    for (int i = 1; i <= max(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            res.push_front(i);
        }
    }
    
    cout << res[k - 1] << endl;
}