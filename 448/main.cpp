#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums) {
    vector<int> ret;
    for (int i = 0; i < nums.size(); i++) {
        while (nums[i] != nums[nums[i] - 1]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {    // 如果鸽子不在正确的巢里
            ret.push_back(i + 1);       // 这个巢本该有的鸽子就是缺失的数字
        }
    }
    return ret;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
