#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int sum(TreeNode *pNode) {
    return pNode == nullptr ? 0 : sum(pNode->left) + sum(pNode->right) + pNode->val;;
}

int findTilt(TreeNode *root) {
    if (root == nullptr)
        return 0;
    int lv = root->left == nullptr ? 0 : sum(root->left);
    int rv = root->right == nullptr ? 0 : sum(root->right);
    return findTilt(root->left)+ findTilt(root->right) + abs(lv - rv);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
