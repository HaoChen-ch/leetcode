#include <iostream>
#include <vector>

using namespace std;

int findMin1(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    int mid;
    while (left <= right) {
        if(left ==right)
            return nums[left];
        mid = left + (right - left) / 2;
        if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
}

int findMin(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    int mid;
    while (left < right) {
        mid = left + (right - left) / 2;
        if (nums[mid] < nums[left]) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return nums[left];
}


int main() {
    std::cout << 3 / 2 << std::endl;
    return 0;
}
