/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
void solve(TreeNode* root, int targetSum,int &c,vector<int> &path){
    if(root==NULL) return ;

    path.push_back(root->val);
    solve(root->left,targetSum,c,path);
    solve(root->right,targetSum,c,path);

    long long sum=0;
    for(int i=path.size()-1;i>=0;i--){
        sum+=path[i];
        if(sum==targetSum){
            c++;
        }
    }
    path.pop_back();
    
}
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int c=0;
        solve(root,targetSum,c,path);
        return c;
    }
};