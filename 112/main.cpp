#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool hasPathSum(TreeNode *root, int sum) {
    if(root== nullptr)
        return false;
    if (root->left == nullptr && root->right == nullptr)
        return root->val == sum;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
