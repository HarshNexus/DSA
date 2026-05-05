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
    pair<int,int> dfast(TreeNode* root){
        if(root == NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }

        pair<int,int>l=dfast(root->left);
        pair<int,int>r=dfast(root->right);

        int o1=l.first;
        int o2=r.first;
        int o3=l.second+r.second;

        pair<int,int>ans;
        ans.first=max(o1,max(o2,o3));
        ans.second=max(l.second,r.second)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dfast(root).first;
    }
};