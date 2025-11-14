class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (!root) return result;

        dfs(root, "", result);
        return result;
    }

    void dfs(TreeNode* node, string path, vector<string>& result) {
        if (!node) return;

        // Append current node value
        if (path.empty()) path = to_string(node->val);
        else path += "->" + to_string(node->val);

        // If leaf node, push path
        if (!node->left && !node->right) {
            result.push_back(path);
            return;
        }

        // Explore left & right
        dfs(node->left, path, result);
        dfs(node->right, path, result);
    }
};
