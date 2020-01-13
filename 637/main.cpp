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

vector<double> averageOfLevels(TreeNode *root) {
    vector<double> ans;
    queue<TreeNode *> q;
    q.push(root);
    while (q.size()) {
        int len = q.size();
        double sum = 0;
        for (int i = 0; i < len; i++) {
            TreeNode *cur = q.front();
            sum += cur->val;
            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        ans.push_back(sum / len);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
