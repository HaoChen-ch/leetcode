#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int pre = 0;
int in = 0;

TreeNode *buildTreeHelper(vector<int> preorder, vector<int> inorder, long stop) {
    if (pre == preorder.size()) {
        return nullptr;
    }
    if (inorder[in] == stop) {
        in++;
        return nullptr;
    }
    int root_val = preorder[pre++];
    TreeNode *root = new TreeNode(root_val);
    root->left = buildTreeHelper(preorder, inorder, root_val);
    root->right = buildTreeHelper(preorder, inorder, stop);
    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return buildTreeHelper(preorder, inorder, INT_MAX);
}


//
//TreeNode *findRoot(vector<int> &preorder, int Pbegin, int Pend, vector<int> &inorder, int Ibegin, int Iend) {
//    if (Pbegin > Pend|| Ibegin > Iend)
//        return nullptr;
//    int root = preorder[Pbegin];
//    int i;
//    for (i = Ibegin; i <= Iend; i++) {
//        if (inorder[i] == root)
//            break;
//    }
//    TreeNode *res = new TreeNode(root);
//
//    res->left = findRoot(preorder, Pbegin +1, Pbegin + i-Ibegin, inorder, Ibegin, i-1);
//    res->right = findRoot(preorder, Pbegin + i -Ibegin+ 1, Pend, inorder, i + 1, Iend);
//
//    return res;
//}
//
//TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
//    if (preorder.size() == 0)
//        return nullptr;
//    return findRoot(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size()-1);
//
//}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}