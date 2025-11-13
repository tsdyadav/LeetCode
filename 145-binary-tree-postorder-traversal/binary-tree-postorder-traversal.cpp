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
   
        void inorder(TreeNode* parent,vector<int> &ans)
        {
        if (parent==nullptr)
            return  ;

        inorder(parent->left,ans);
        inorder(parent->right,ans);
        ans.push_back(parent->val);  
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> ans;
        inorder(root,ans);

    return ans;   
        
    }
};