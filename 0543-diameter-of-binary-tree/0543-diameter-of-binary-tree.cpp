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
    if(root ==NULL) return 0;

    int r=h(root->right);
    int l=h(root->left);
    int ans=max(l,r)+1;
    return ans;

}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        int a=diameterOfBinaryTree(root->left);
        int b=diameterOfBinaryTree(root->right);
        int c=h(root->left)+h(root->right);

        int ans=max(a,max(b,c));
        return ans;

    }
};