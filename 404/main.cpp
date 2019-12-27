#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sum = 0;

void getsum(TreeNode *root, bool isLeft) {
    if (root == nullptr)
        return;
    if (isLeft && root->left == nullptr && root->right == nullptr)
        sum = sum + root->val;
    getsum(root->left, true);
    getsum(root->right, false);
}

int sumOfLeftLeaves(TreeNode *root) {
    getsum(root, false);
    return sum;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
