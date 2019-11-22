#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> res;
    vector<int> tmp;
    res.push_back(tmp);
    for (int i = 0; i < nums.size(); i++) {
        int len = res.size();
        for (int j = 0; j < len;  j++) {
            tmp = res[j];
            tmp.push_back(nums[i]);
            res.push_back(tmp);
        }
    }
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}