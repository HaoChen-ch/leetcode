#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rightSideView(TreeNode *root) {
    vector<int> res;
    queue<TreeNode *> q;
    if (root == nullptr)
        return res;
    q.push(root);
    while (!q.empty()) {
        int len = q.size();
        res.push_back(q.back()->val);
        for (int i = 0; i < len; i++) {
            TreeNode *tmp = q.front();
            q.pop();
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
    }
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
