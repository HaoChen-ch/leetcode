#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *constructMaximumBinaryTree(vector<int> &nums, int left, int right) {
    if (left > right)
        return nullptr;
    int m_max = 0;
    int pos = left;
    for (int i = left; i <= right; i++) {
        if (nums[i] > m_max) {
            m_max = nums[i];
            pos = i;
        }
    }
    auto *root = new TreeNode(nums[pos]);
    root->left = constructMaximumBinaryTree(nums, left, pos - 1);
    root->right = constructMaximumBinaryTree(nums, pos + 1, right);
    return root;
}

TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
    if (nums.empty()) return nullptr;
    return constructMaximumBinaryTree(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {3, 2, 1, 6, 0, 5};

    TreeNode *root = constructMaximumBinaryTree(nums);
    return 0;
}
