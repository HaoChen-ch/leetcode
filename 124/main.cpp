#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int res = INT_MIN;

int help(TreeNode *root) {
    if (root == nullptr)
        return 0;
    int left = help(root->left);
    int right = help(root->right);
    res = max(res, left + right + root->val);
    return max(0, max(left, right) + root->val);
}

int maxPathSum(TreeNode *root) {
    help(root);
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
