#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int rob(vector<int> &nums) {
    if(nums.empty())
        return 0;
    vector<int> dp(nums.size()+1);
    dp[0] = 0;
    dp[1] = nums[0];
    for (int i = 2; i <nums.size() ; i++) {
        dp[i] =max(dp[i-1],dp[i-2]+nums[i-1]);
    }
    return dp[nums.size()];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
