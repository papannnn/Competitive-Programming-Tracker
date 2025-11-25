#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int k, l;
        string n;
        cin >> n >> k >> l;

        int cnt = n.size();
        int start = 1;
        for (int i = 0 ; i < cnt - 1; i++) {
            start *= 10;
            start++;
        }

        int end = 9;
        for (int i = 0 ; i < cnt - 1; i++) {
            end *= 10;
            end += 9;
        }
        
        int res = 0;
        for (int i = start; i <= end; i++) {
            string num = to_string(i);
            bool valid = true;
            for (int j = 0 ; j < num.size(); j++) {
                if (num[j] == '0') {
                    valid = false;
                }
            }
            if (!valid) {
                continue;
            }

            int correct = 0;
            unordered_set<int> flagging;
            unordered_map<int, int> cntWrong;

            for (int i = 0 ; i < n.size(); i++) {
                cntWrong[n[i] - '0']++;
            }

            for (int j = 0; j < num.size(); j++) {
                if (num[j] == n[j]) {
                    correct++;
                    cntWrong[num[j] - '0']--;
                    flagging.insert(j);
                }
            }

            if (correct != k) {
                continue;
            }

            int wrongCorrect = 0;
            for (int j = 0 ; j < num.size(); j++) {
                if (flagging.find(j) != flagging.end()) {
                    continue;
                }

                if (cntWrong[num[j] - '0'] > 0) {
                    cntWrong[num[j] - '0']--;
                    wrongCorrect++;
                }
            }
            
            if (wrongCorrect != l) {
                continue;
            }

            res++;
        }
        cout << res << endl;
    }
}