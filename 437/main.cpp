#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



int  pathSum(TreeNode *root, int sum) {
    int cnt =0;
    if(root == nullptr)
        return 0;
    return pathSum(root->right,sum)+pathSum(root->left,sum-root->val)+pathSum(root->right,sum-root->val);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
