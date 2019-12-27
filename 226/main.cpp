#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr)
        return root ;
    TreeNode *tmpl = root->left;
    TreeNode *tmpr = root->right;
    root->right = invertTree(tmpl);
    root->left = invertTree(tmpr);
    return root;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
