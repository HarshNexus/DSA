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
int h(TreeNode* root){
    if(root==NULL) return 0;
    int ans=0;
    int l=h(root->left);
    int r=h(root->right);
    ans=max(l,r)+1;
    return ans;
}
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int a=h(root->left);
        int b=h(root->right);
        bool l=isBalanced(root->left); 
        bool r=isBalanced(root->right);
        bool q=abs(a-b)<=1;

        if(l && r && q) return true;
        else return false;
        
    }
};