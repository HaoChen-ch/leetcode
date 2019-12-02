#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root== nullptr || root == p || root == q) {
        return root;
    }
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    if (left!= nullptr && right!= nullptr) {
        return root;
    }
    return left ? left : right;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}