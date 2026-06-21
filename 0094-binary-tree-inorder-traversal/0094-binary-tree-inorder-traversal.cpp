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
vector<int> ans;
void inorder(TreeNode * root){
    TreeNode* curr=root;
    while(curr!=NULL){
        if(curr->left == NULL){
            ans.push_back(curr->val);
            curr=curr->right;
        }
        else{
            TreeNode* pred=curr->left;
            while (pred->right != nullptr && pred->right != curr){
                pred = pred->right;
            }

        if(pred->right==NULL){
            pred->right=curr;
            curr=curr->left;
        }

        else{
            pred->right=NULL;
            ans.push_back(curr->val);
            curr=curr->right;

        }
        }
    }
        
}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};