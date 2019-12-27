#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int minDepth(TreeNode *root) {
    if (root == nullptr) return 0;
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
//    if (root->left == nullptr || root->right == nullptr)
//        return leftDepth + rightDepth + 1;
    return 1 + min(leftDepth, rightDepth);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
