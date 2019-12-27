#include <iostream>
#include <vector>

using namespace std;

int minCostClimbingStairs(vector<int> &cost) {
    if (cost.size() < 2)
        return 0;
    vector<int> dp(cost.size() + 1);
    dp[0] = dp[1] = 0;
    for (int i = 2; i < cost.size(); i++) {
        dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }
    return dp[cost.size()];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
