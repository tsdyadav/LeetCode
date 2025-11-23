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
    vector<int>nums;
    void inorder(TreeNode* root)
    {
         if(root==nullptr)
         return ;
    // inorder
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
     TreeNode* BST(vector<int>&nums,int st,int end)
     {
        if(st>end)
        return nullptr;
        int mid=(st+end)/2;
        TreeNode* r=new TreeNode(nums[mid]);
        r->left=BST(nums,st,mid-1);
        r->right=BST(nums,mid+1,end);
        return r;

     }
    TreeNode* balanceBST(TreeNode* root) {
     // for inordre
     inorder(root);
    return  BST(nums,0,nums.size()-1);

    
        
    }
};