class Solution {
public:
    void rotate(vector<vector<int>>& mat)
    {
       int n=mat.size();
       // traspose
       for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            swap(mat[i][j],mat[j][i]);
    // reverse
     for (int i = 0; i < n; i++)
            reverse(mat[i].begin(), mat[i].end());
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int i=0;i<4;i++)
        {
            if(mat==target) return true;
            else 
            rotate(mat);
        }
        return false;
    }
};