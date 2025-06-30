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
     int diffbst(TreeNode* root , int &prev,int &ans)
     {
        if(!root)
        return 1;
        diffbst(root->left,prev,ans);
        if(prev!=INT_MIN)
        if(ans<(root->val)-prev)
        ans=ans;
        else
        ans=root->val-prev;
        prev=root->val;
        diffbst(root->right,prev,ans);
        return ans;

     }
    int minDiffInBST(TreeNode* root) {
        int prev=INT_MIN;
        int ans=INT_MAX;
        return diffbst(root,prev,ans);

    }
};