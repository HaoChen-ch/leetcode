#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
int missingNumber(vector<int>& nums) {
    return -accumulate(nums.begin(),nums.end(),-nums.size()*(nums.size()+1)/2);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}