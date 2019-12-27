#include <iostream>
#include <climits>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isValidBST1(TreeNode *root) {
    stack<TreeNode *> stack;
    long inorder = LONG_MIN;
    while (!stack.empty() || root != nullptr) {
        while (root != nullptr) {
            stack.push(root);
            root = root->left;
        }
        root = stack.top();
        stack.pop();
        if (root->val <= inorder) return false;
        inorder = root->val;
        root = root->right;
    }
    return true;
}

bool isValid(TreeNode *current, long left, long right) {
    if (current == nullptr) return true;
    else if (current->val <= left || current->val >= right) return false;
    return isValid(current->left, left, current->val) && isValid(current->right, current->val, right);
}

bool isValidBST(TreeNode *root) {
    return isValid(root, LONG_MIN, LONG_MAX);
}

int main() {
    bool a = -2147483648 < INT_MIN;
    std::cout << a << endl;
    return 0;
}
