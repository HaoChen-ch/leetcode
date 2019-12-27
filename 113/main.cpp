#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> res;

void inorder(TreeNode *root, vector<int> path, int cursum, int &sum) {
    if (root == nullptr)
        return;
    path.push_back(root->val);
    cursum += root->val;
    if (root->left == nullptr && root->right == nullptr && cursum == sum)
        res.push_back(path);
    inorder(root->left, path, cursum, sum);
    inorder(root->right, path, cursum, sum);
}

vector<vector<int>> pathSum(TreeNode *root, int sum) {
    vector<int> path;
    inorder(root, path, 0, sum);
    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
