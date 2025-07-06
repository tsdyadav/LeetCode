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
// int count=0;
// int inorder(TreeNode* root,int count)
// {
//     if(!root) return 0;
     
//     inorder(root->left,count++);
//     inorder(root->right, count++);
//     return count;

// }
    int countNodes(TreeNode* root) {
       
      if(!root)
      return 0;
      
       
      return 1 + countNodes(root->left)+countNodes(root->right) ;

    }
};