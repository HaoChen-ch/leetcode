#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *sortedArrayToBST(vector<int> &nums, int begin, int end) {

    if (begin > end)
        return nullptr;
    int mid = (begin + end) >> 1;
    TreeNode *root = new TreeNode(nums[mid]);

    root->left = sortedArrayToBST(nums, begin, mid-1);
    root->right = sortedArrayToBST(nums, mid + 1, end);
    return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}