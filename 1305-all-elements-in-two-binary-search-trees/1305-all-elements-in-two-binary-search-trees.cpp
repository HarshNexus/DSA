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
vector<int>ans;
private:
void inorder(TreeNode* root,vector<int> &a){
    if(root==NULL) return;

    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right,a);
}
void merge(vector<int> &a1,vector<int> &a2,vector<int> &ans){
    int i=0;
    int j=0;
    while(i<a1.size() && j<a2.size()){
        if(a1[i]<=a2[j]){
            ans.push_back(a1[i]);
            i++;
        }
        else if(a1[i]>a2[j]){
            ans.push_back(a2[j]);
            j++;
        }
    }
    while(i<a1.size()){        
            ans.push_back(a1[i]);
            i++;
    }
    while(j<a2.size()){
            ans.push_back(a2[j]);
            j++;
        }
}

public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        vector<int>a1;
        vector<int>a2;
        inorder(root1,a1);
        inorder(root2,a2);
        merge(a1,a2,ans);
        return ans;

    }
};