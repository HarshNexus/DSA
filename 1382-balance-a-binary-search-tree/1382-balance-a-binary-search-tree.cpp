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
vector<TreeNode* >arr;
private:
void inorder(TreeNode* root){
    if (root == NULL) return;

    inorder(root->left);
    arr.push_back(root);
    inorder(root->right);
}
TreeNode* intobst(int s,int e){
    if(s>e) return NULL;
    int m=s+(e-s)/2;
    TreeNode*root=arr[m];
    root->left=intobst(s,m-1);
    root->right=intobst(m+1,e);
    return root;
}
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int n=arr.size();
        return intobst(0,n-1);
    }
};