#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int res = INTMAX_MAX;
TreeNode *pre = nullptr;

void inorder(TreeNode *root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    if (pre != nullptr)
        res = min(res, root->val - pre->val);
    pre = root;
    inorder(root->right);
}

int getMinimumDifference(TreeNode *root) {
    inorder(root);
    return res;
}

int main() {
    std::cout << INTMAX_MAX << std::endl;
    return 0;
}
