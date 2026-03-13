#include <bits/stdc++.h>

using namespace std;
// O(s)
int main () {
    string s;
    getline(cin, s);
    while (s != "Game Over") {
        deque<int> queue;
        int res = 0;
        int prevNum = 0;
        int cnt = 0;
        for (int i = 0 ; i < s.length(); i += 2) {
            if (s[i] == 'X') {
                res += 10;
                cnt += 2;

                for (int j = 0; j < queue.size(); j++) {
                    queue[j]--;
                    res += 10;
                }

                while (!queue.empty() && queue.front() == 0) {
                    queue.pop_front();
                }

                if (cnt < 20)
                    queue.push_back(2);
                continue;
            }

            cnt++;

            if (s[i] == '/') {
                res += 10 - prevNum;
                for (int j = 0; j < queue.size(); j++) {
                    queue[j]--;
                    res += 10 - prevNum;
                }

                while (!queue.empty() && queue.front() == 0) {
                    queue.pop_front();
                }

                if (cnt < 20)
                    queue.push_back(1);
                continue;
            }

            res += s[i] - '0';
            prevNum = s[i] - '0';
            for (int j = 0; j < queue.size(); j++) {
                queue[j]--;
                res += prevNum;
            }

            while (!queue.empty() && queue.front() == 0) {
                queue.pop_front();
            }
        }
        
        cout << res << endl;
        getline(cin, s);
    }
}