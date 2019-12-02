#include <iostream>
#include <vector>

using namespace std;

int sumAlive(int i, int j, vector<vector<int>> board) {
    int sum = 0;
    int left = max(j - 1, 0);
    int right = min(j + 1, int(board[i].size() - 1));
    int top = max(i - 1, 0);
    int bottom = min(i + 1, int(board.size() - 1));
    for (int x = top; x <= bottom; x++)
        for (int y = left; y <= right; y++)
            sum = sum + board[x][y];
    return sum - board[i][j];
}

void gameOfLife(vector<vector<int>> &board) {
    vector<vector<int>> tmp = board;
    int alive = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            alive = sumAlive(i, j, tmp);
            if (board[i][j] == 1 && alive < 2)
                board[i][j] = 0;
            else if (board[i][j] == 1 && (alive == 2 || alive == 3))
                board[i][j] = 1;
            else if (board[i][j] == 1 && alive > 3)
                board[i][j] = 0;
            else if (board[i][j] == 0 && alive == 3)
                board[i][j] = 1;
        }
    }
}

int main() {
    std::cout << min(1 - 1, 2 - 1) << std::endl;
    return 0;
}