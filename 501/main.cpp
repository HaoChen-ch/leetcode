#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *pre = nullptr;
vector<int> res;
int maxtime = 0;
int tmptime = 1;

void inorder(TreeNode *root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    if (pre)
        pre->val == root->val ? (tmptime++) : (tmptime = 1);
    if (tmptime == maxtime)
        res.push_back(root->val);
    else if (tmptime > maxtime) {
        res.clear();
        res.push_back(root->val);
        maxtime = tmptime;
    }
    pre = root;
    inorder(root->right);
}

vector<int> findMode(TreeNode *root) {
    if (root == nullptr)
        return res;
    inorder(root);
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
