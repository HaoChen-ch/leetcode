#include <iostream>
#include <windef.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int countNodes(TreeNode *root) {

    return root == nullptr ? 0 : countNodes(root->right) + countNodes(root->left) + 1;
}

int main() {
    std::cout << max(2, 3) << std::endl;
    return 0;
}
