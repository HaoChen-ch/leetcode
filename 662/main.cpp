#include <iostream>
#include <deque>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int widthOfBinaryTree(TreeNode *root) {
    if (root == nullptr)
        return 0;
    deque<TreeNode *> q;
    q.push_back(root);
    int res = 0;
    while (q.size()) {
        while (q.size() && q.back() == nullptr)
            q.pop_back();
        while (q.size() && q.front() == nullptr)
            q.pop_front();
        int len = q.size();
        res = max(len, res);
        for (int i = 0; i < len; i++) {
            TreeNode *cur = q.front();
            q.push_back(cur == nullptr || cur->left == nullptr ? nullptr : cur->left);
            q.push_back(cur == nullptr || cur->right == nullptr ? nullptr : cur->right);

            q.pop_front();
        }
    }
    return res;
}

int main() {
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(3);
    TreeNode *c = new TreeNode(2);
    a->left = b;
    a->right = c;
    cout << widthOfBinaryTree(a) << endl;
    return 0;
}
