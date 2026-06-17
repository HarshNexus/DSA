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
TreeNode* ntpmapping(TreeNode* &root,int target,map<TreeNode*,TreeNode*>& ntp){
    TreeNode* res=NULL;
     queue<TreeNode*>q;
     q.push(root);
     ntp[root]=NULL;
     while(!q.empty()){

        TreeNode* front=q.front();
        q.pop();
        if(front->val==target){
            res=front;
        }
        if(front->left){
            ntp[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            ntp[front->right]=front;
            q.push(front->right);
        }
     }
     return res;
}

int infect(TreeNode* t,map<TreeNode*,TreeNode*>& ntp){
    map<TreeNode*,int>visited;
    queue<TreeNode*>q;
    int ans=0;
    
    q.push(t);
    visited[t]=1;


    while(!q.empty()){
        bool flag=0;
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode* front=q.front();
        q.pop();
            if(front->left && !visited[front->left]){
                flag=1;
            q.push(front->left);
            visited[front->left]=1;
        }

        if(front->right && !visited[front->right]){
            flag=1;
            q.push(front->right);
            visited[front->right]=1;
        }

        if(ntp[front] && !visited[ntp[front]]){
            flag=1;
            q.push(ntp[front]);
            visited[ntp[front]]=1;
        }
        }
        if(flag==1){
            ans++;
        }
    }
    return ans;


}
public:
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*> ntp;
        TreeNode* t=ntpmapping(root,start,ntp);

        int ans=infect(t,ntp);
        return ans;
    }
};