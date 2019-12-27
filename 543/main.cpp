#include <iostream>
#include <windef.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int res  = 0;
int getdepth(TreeNode *root){
    if(root == nullptr)
        return 0;
    int l = getdepth(root->left);
    int r = getdepth(root->right);
    res = max(res,l+r+1);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode *root) {
    getdepth(root);
    return res -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
