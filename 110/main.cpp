#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}

bool isBalanced(TreeNode *root) {
    if (root == nullptr)
        return true;
    return abs(depth(root->left) - depth(root->right)) < 2 && isBalanced(root->right) && isBalanced(root->left);

}

int depth(TreeNode *root) {
    if (root == nullptr)
        return 0;
    return max(depth(root->left), depth(root->right)) + 1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
