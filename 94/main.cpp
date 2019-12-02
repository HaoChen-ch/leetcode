#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode *root) {
    vector<int> res;
    stack<TreeNode *> stk;
    if (root == nullptr)
        return res;
    TreeNode *p = root;
    while (!stk.empty() || p) {
        while (p) {
            stk.push(p);
            p = p->left;
        }
        p = stk.top(); stk.pop();
        res.push_back(p->val);
        p = p->right;
    }
    return  res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}