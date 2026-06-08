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
void sum(TreeNode* root,int level,int &ml,int &s){
    if(root==NULL){
        return;
    }

    if(level==ml){
        s += root->val;
            return;
    }

    sum(root->left,level+1,ml,s);
    sum(root->right,level+1,ml,s);
    
}
void solve(TreeNode* root,int level,int &ml){
    if(root==NULL){
        
        return;
    }
    ml=max(ml,level);

    solve(root->left,level+1,ml);
    solve(root->right,level+1,ml);
    
}

public:
    int deepestLeavesSum(TreeNode* root) {
        int l=0;
        int ml=INT_MIN;
        int s=0;
        solve(root,l,ml);
        sum(root,l,ml,s);
        return s;
    }
};