#include <iostream>
#include <vector>

using namespace std;

int findPos(vector<int> &nums, int left, int right, int target) {
    int mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        nums[mid] < target ? (left = mid + 1) : (right = mid - 1);
    }
    return -1;
}

vector<int> twoSum(vector<int> &numbers, int target) {
    int low = 0, high = numbers.size() - 1;
    while (low <= high) {
        int sum = numbers[low] + numbers[high];
        if (sum == target)
            return {low + 1, high + 1};
        sum < target ? low++ : high--;
    }
    return {-1, -1};
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
