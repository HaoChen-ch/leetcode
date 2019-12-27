#include <iostream>
using namespace std;
int search(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        nums[left] <= nums[mid] ? target >= nums[left] && target < nums[mid] ? (right = mid - 1) : (left = mid + 1) :
        target <= nums[right] && target > nums[mid] ? (left = mid + 1) : (right = mid - 1);

    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
