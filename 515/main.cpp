#include <iostream>
#include <iostream>
#include <queue>
#include <climits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> largestValues(TreeNode *root) {
    vector<int> ans;
    if (root == nullptr)
        return ans;
    queue<TreeNode *> q;
    q.push(root);
    while (q.size()) {
        int len = q.size();
        int cur = INT_MIN;
        for (int i = 0; i < len; i++) {
            TreeNode *tmp = q.front();
            q.pop();
            cur = max(cur, tmp->val);
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        ans.push_back(cur);
    }
    return ans;
}

int main() {
    std::cout << INT16_MIN << std::endl;
    return 0;
}
