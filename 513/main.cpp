#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findBottomLeftValue(TreeNode *root) {
    queue<TreeNode *> q;
    int res;
    int len;
    TreeNode *cur;
    q.push(root);
    while (q.size()) {
        len = q.size();
        res = q.front()->val;
        for (int i = 0; i < len; i++) {
            cur = q.front();
            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
    }
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
