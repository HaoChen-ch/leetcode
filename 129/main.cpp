#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sum;
void preorder(TreeNode *root, int cursum) {
    if(root == nullptr)
        return;
    cursum = cursum * 10 + root->val;
    if (root->left == nullptr && root->right == nullptr) {
        sum = sum + cursum;
    }
    preorder(root->left, cursum);
    preorder(root->right, cursum);
}

int sumNumbers(TreeNode *root) {
    if(root== nullptr)
        return 0;

    preorder(root, 0);

    return sum;
}

int main() {
    auto *a = new TreeNode(1);
    auto *b = new TreeNode(2);
    auto *c = new TreeNode(3);
    a->left = b;
    a->right = c;
    int d = sumNumbers(a);
    cout << d << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
