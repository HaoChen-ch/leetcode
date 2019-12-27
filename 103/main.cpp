#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

    *
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    vector<vector<int>> ans;
    queue<TreeNode *> q;
    if (root == nullptr)
        return ans;
    q.push(root);
    bool even = false;
    while (!q.empty()) {
        int len = q.size();
        vector<int> level;
        for (int i = 0; i < len; i++) {
            TreeNode *tmp = q.front();
            q.pop();
            level.push_back(tmp->val);
            if (tmp->left != nullptr)
                q.push(tmp->left);
            if (tmp->right != nullptr)
                q.push(tmp->right);
        }
        if (even)
            reverse(level.begin(), level.end());
        ans.push_back(level);
        even = !even;
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
