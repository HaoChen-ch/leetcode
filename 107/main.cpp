#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
struct TreeNode {
        int val;
        TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

void levelorder(TreeNode* root,int level,vector<vector<int>>& ans) {
    if(root== nullptr)
        return ;
    if(ans.size()==level) ans.emplace_back();
    ans[level].push_back(root->val);
    if(root->left) levelorder(root->left,level+1,ans);
    if(root->right) levelorder(root->right,level+1,ans);


}
vector<vector<int>> levelOrderBottom1(TreeNode* root) {
    vector<vector<int>> res;
    levelorder(root,0,res);
    return vector<vector<int>>(res.rbegin(),res.rend());
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> ans;
    if(root== nullptr)
        return ans;
    q.push(root);
    while (!q.empty()){
        vector<int> tmp;
        int len = q.size();
        for (int i = 0; i < len; i++) {
            TreeNode* t = q.front();
            q.pop();
            tmp.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        ans.push_back(tmp);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
