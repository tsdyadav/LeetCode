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
    int height(TreeNode* root)
    {
        if(root==nullptr)
        return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
    int ans=0;
    void helper(TreeNode* root, int hi)
    {
        if(root==nullptr)
        return ;
        if(hi==1)
        {
            ans=ans+root->val;
        }
        helper(root->left,hi-1);
        helper(root->right,hi-1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        helper(root,h);
        return ans;
    }
};