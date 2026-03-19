#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12959
// O(t * J * R)
int main () {
    int J, R;
    while (cin >> J) {
        cin >> R;
        vector<int> scoreArr(J);
        for (int i = 0 ; i < R; i++) {
            for (int j = 0; j < J; j++) {
                int score;
                cin >> score;
                scoreArr[j] += score;
            }
        }

        int idx = 0;
        int maxVal = 0;
        for (int i = 0 ; i < scoreArr.size(); i++) {
            if (scoreArr[i] >= maxVal) {
                maxVal = scoreArr[i];
                idx = i;
            }
        }
        cout << idx + 1 << endl;
    }
}