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

vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> res;
    queue<TreeNode*> q;
    if (root == nullptr)
        return res;
    q.push(root);
    vector<int> level;
    while (!q.empty()) {
        level.clear() ;
        int cnt = q.size();
        for (int i = 0; i < cnt; i++) {
            TreeNode *tmp = q.front();
            q.pop();
            level.push_back(tmp->val);
            if (tmp->left != nullptr)
                q.push(tmp->left);
            if (tmp->right != nullptr)
                q.push(tmp->right);
        }
        res.push_back(level);
    }
    return res;
}

int main() {
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    vector<int> res = levelOrder(a);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}