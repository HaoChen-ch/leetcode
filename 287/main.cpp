#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums) {
    int fast = nums[nums[0]];
    int slow = nums[0];
    while (fast != slow) {
        fast = nums[nums[fast]];
        slow = nums[slow];
    }
    slow = nums[slow];

    int p = nums[0];
    while (p != slow) {
        p = nums[p];
        slow = nums[slow];
    }
    return p;
}
int findDuplicate1(vector<int> &nums) {
    int fast = nums[0];
    int slow = nums[0];
     do{
        fast = nums[nums[fast]];
        slow = nums[slow];
    }while (fast != slow);

    int p = nums[0];
    while (p != slow) {
        p = nums[p];
        slow = nums[slow];
    }
    return p;
}


int main() {
    vector<int> a ={1,3,4,2,2};
    std::cout << findDuplicate(a) << std::endl;
    return 0;
}