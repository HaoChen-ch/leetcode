#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

//TreeNode *last = nullptr;
//
//void flatten1(TreeNode *root) {
//    if (root == nullptr) return;
//    // 前序：注意更新last节点，包括更新左右子树
//    if (last != nullptr) {
//        last->left = nullptr;
//        last->right = root;
//    }
//    last = last->right;
//    // 前序：注意备份右子节点，规避下一节点篡改
//    TreeNode *copyRight = root->right;
//    flatten1(root->left);
//    flatten1(copyRight);
//}
TreeNode *head;

void help(TreeNode *root) {
    if (root == nullptr||head == nullptr)
        return;
    TreeNode *tmpr = root->right;
    TreeNode *tmpl = root->left;
    head->left = nullptr;
    head->right = root;
    head = root;
    help(tmpl);
    help(tmpr);

}
void flatten(TreeNode *root) {
   if(root == nullptr)
       return;
   head = root;
   help(root);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
