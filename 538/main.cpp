#include <iostream>
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
int sum =0;
TreeNode* convertBST(TreeNode* root) {
    if(root ==nullptr)
        return nullptr;
    convertBST(root->right);
    sum +=root->val;
    root->val = sum ;
    convertBST(root->left);
    return root;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
