#include <iostream>
#include <vector>

using namespace std;

void sortColors1(vector<int> &nums) {
    int sum0 = 0, sum1 = 0;
    for (int num :nums) {
        if (num == 0) sum0++;
        if (num == 1) sum1++;
    }
    for (int i = 0; i < sum0; i++) {
        nums[i] = 0;
    }
    for (int i = sum0; i < sum0 + sum1; i++) {
        nums[i] = 1;
    }
    for (int i = sum0 + sum1; i < nums.size(); i++) {
        nums[i] = 2;
    }
}

void sortColors(vector<int> &nums) {
    int p0 = 0;
    int p2 = nums.size() - 1;
    int cur = 0;
    while (cur <= p2) {
        if (nums[cur] == 0) {
            swap(nums[p0], nums[cur]);
            p0++;
            cur++;
        } else if (nums[cur] == 2) {
            swap(nums[p2], nums[cur]);
            p2--;
        }
        else cur ++;
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
