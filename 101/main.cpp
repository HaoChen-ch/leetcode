#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSymmetric(TreeNode *p1, TreeNode *p2) {
    if (p1 == nullptr && p2 == nullptr)
        return true;
    if (p1 == nullptr || p2 == nullptr)
        return false;
    return p1->val == p2->val && isSymmetric(p1->right, p2->left) && isSymmetric(p1->left, p2->right);

}

bool isSymmetric(TreeNode *root) {

    return isSymmetric(root, root);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}