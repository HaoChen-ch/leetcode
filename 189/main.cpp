#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int begin, int end) {
    while (begin < end) {
        swap(nums[begin++], nums[end--]);
    }
}

void rotate(vector<int> &nums, int k) {
    k = k % nums.size();
    rotate(nums, 0, nums.size() - 1);
    rotate(nums, k, nums.size() - 1);
    rotate(nums, 0, k - 1);

//    rotate(nums, k, nums.size()-1);
//    rotate(nums, 0, nums.size()-1);
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    rotate(a, 3);
    for (int num :a)
        cout << num << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}