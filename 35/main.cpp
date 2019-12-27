#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target) {
    int left = 0, mid;
    int right = nums.size() - 1;
    if (target > nums[right])
        return nums.size();
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        nums[mid] < target ? (left = mid + 1) : (right = mid);
    }
    return left;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
