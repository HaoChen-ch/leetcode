#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<string> res;


void help(TreeNode *root, string path) {
    if (root == nullptr)
        return;
    path+=to_string(root->val);
    if (root->left == nullptr && root->right == nullptr)
        res.push_back(path);
    else {
        path.push_back('-');
        path.push_back('>');
        help(root->left, path);
        help(root->right, path);
    }
}

vector<string> binaryTreePaths(TreeNode *root) {
    help(root, "");
    return res;
}

int main() {
//    string s;
//    int a =1;
//    s.push_back(char(a));
//    cout << s<< endl;
cout<<"hello"<<endl;
    return 0;
}
