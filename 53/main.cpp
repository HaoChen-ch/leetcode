#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int maxSubArray(vector<int> &nums) {
    int sum = 0;
    int res =nums[0];
    for (int num :nums) {
        sum = sum + num;
        res = max(res, sum);
        sum = max(sum, 0);
    }
    return res;
}

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << maxSubArray(a) << std::endl;
    return 0;
}