#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *buildTree(vector<int> &inorder, int ileft, int iright, vector<int> &postorder, int pleft, int pright) {
    if (ileft > iright || pleft > pright)
        return nullptr;
    auto *root = new TreeNode(postorder[pright]);
    int pos = 0;
    while (inorder[ileft + pos] != postorder[pright]) {
        pos++;
    }
    root->left = buildTree(inorder, ileft, ileft + pos - 1, postorder, pleft, pleft + pos - 1);
    root->right = buildTree(inorder, ileft + pos + 1, iright, postorder, pleft + pos, pright - 1);
    return root;
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    if (inorder.empty())
        return nullptr;
    return buildTree(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
