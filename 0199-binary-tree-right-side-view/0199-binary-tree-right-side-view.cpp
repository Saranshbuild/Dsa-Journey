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

     void sol(TreeNode* root,vector<int>&ans,int lv){
        if(!root){
            return;
        }
        if(ans.size()==lv){
            ans.push_back(root->val);
        }
        sol(root->right,ans,lv+1);
        sol(root->left,ans,lv+1);

     }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        sol(root,ans,0);
        return ans;
    }
};