#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> postorderTraversal(TreeNode *root) {
    vector<int> ans;
    TreeNode *p = root;
    stack<TreeNode *> s;
    while (!s.empty() || p) {
        while (p) {
            s.push(p->left);
            ans.push_back(p->val);
            p = p->right;
        }
        p = s.top();
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
