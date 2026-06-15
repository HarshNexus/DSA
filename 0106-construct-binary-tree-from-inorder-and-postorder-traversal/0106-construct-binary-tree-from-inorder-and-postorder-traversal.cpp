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
void maping(vector<int>& inorder,int n,map<int,int> & nti){
    for(int i=0;i<n;i++){
        nti[inorder[i]]=i;
    }
}
TreeNode* solve(vector<int>& postorder,vector<int>& inorder,int s,int e,int n,map<int,int> & nti,int &in){
    if(in<0 || s>e){
        return NULL;
    }

    int element = postorder[in--];
    TreeNode*root=new TreeNode(element);
    int pos=nti[element];
    root->right=solve(postorder,inorder,pos+1,e,n,nti,in);
    root->left=solve(postorder,inorder,s,pos-1,n,nti,in);

    return root;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int prein=n-1;
        map<int,int>  nti;
        maping(inorder,n,nti);
        TreeNode*ans=solve(postorder,inorder,0,n-1,n,nti,prein);
        return ans;
    }
};