#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> res;
    if (!binary_search(nums.begin(), nums.end(), target)) {
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
    auto n1 = equal_range(nums.begin(), nums.end(), target);
    res.push_back(n1.first - nums.begin());
    res.push_back(n1.second - nums.begin() - 1);
    return res;
}

int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
