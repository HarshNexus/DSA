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
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        int d=val;
         if(root == NULL)
            return NULL;
        if(root->val==d){
            return root;
        }
        if(d>root->val){
            return searchBST(root->right,d);
        }
        else{
            return searchBST(root->left,d);
        }
        

    }
};