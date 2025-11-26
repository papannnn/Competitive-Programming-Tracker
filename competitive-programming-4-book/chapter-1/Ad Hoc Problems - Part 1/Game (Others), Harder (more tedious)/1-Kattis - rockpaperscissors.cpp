#include <bits/stdc++.h>

using namespace std;
int main () {
    int player, k;
    while (true) {
        cin >> player;
        if (player == 0) {
            break;
        }

        cin >> k;
        unordered_map<int, int> playerLose;
        unordered_map<int, int> playerWin;
        int loop = k * player * (player - 1) / 2;
        for (int i = 0 ; i < loop; i++) {
            int player1, player2;
            string choose1, choose2;
            
            cin >> player1 >> choose1 >> player2 >> choose2;
            if (choose1.compare("rock") == 0) {

                if (choose2.compare("rock") == 0) {
                    // Tie
                } else if (choose2.compare("paper") == 0) {
                    playerWin[player2]++;
                    playerLose[player1]++;
                } else {
                    playerWin[player1]++;
                    playerLose[player2]++;
                }

            } else if (choose1.compare("paper") == 0) {

                if (choose2.compare("rock") == 0) {
                    playerWin[player1]++;
                    playerLose[player2]++;
                } else if (choose2.compare("paper") == 0) {

                } else {
                    playerWin[player2]++;
                    playerLose[player1]++;
                }

            } else {

                if (choose2.compare("rock") == 0) {
                    playerWin[player2]++;
                    playerLose[player1]++;
                } else if (choose2.compare("paper") == 0) {
                    playerWin[player1]++;
                    playerLose[player2]++;
                } else {
                    
                }

            }
        }
        for (int i = 1 ; i <= player; i++) {
            if (playerWin[i] + playerLose[i] == 0) {
                cout << "-" << endl;
                continue;
            }
            double res = (double) playerWin[i] / (playerWin[i] + playerLose[i]);
            cout << fixed << setprecision(3) << res << endl;
        }
        cout << endl;
        player = 0;
    }
}