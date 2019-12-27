#include <iostream>
#include <vector>
using namespace std;
bool search(vector<int> &nums, int target) {
    if ( nums.size() == 0) {
        return false;
    }
    if(nums.size()==1)
        return nums[0]==target;
    int left = 0;
    int right = nums.size() - 1;
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return true;
        if (nums[right] == nums[mid]) {
            right++;
            continue;
        }
        if (nums[left] < nums[mid]) {
            target >= nums[left] && target < nums[mid] ? (right = mid - 1) : (left = mid + 1);
        } else {
            target <= nums[right] && target > nums[mid] ? (left = mid + 1) : (right = mid - 1);
        }

    }
    return false;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
