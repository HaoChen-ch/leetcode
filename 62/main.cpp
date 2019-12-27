#include <iostream>
#include <vector>

using namespace std;

int uniquePaths(int m, int n) {
    int dp[m][n];
    for (int k = 0; k < m; k++) {
        dp[k][0] = 1;
    }
    for (int l = 0; l < n; l++) {
        dp[0][l] = 1;
    }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m-1][n-1];
}

int main() {
    std::cout << uniquePaths(3, 2) << std::endl;
    return 0;
}
