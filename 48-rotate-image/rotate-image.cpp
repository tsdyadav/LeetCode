class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      for(int i=0;i<matrix.size()-1;i++)
      for(int j=i+1;j<matrix.size();j++)
      swap(matrix[i][j],matrix[j][i]);

      for(int i=0;i<matrix.size();i++)
      {int start=0,end=matrix.size()-1;
      while(start<end)
      swap(matrix[i][start++],matrix[i][end--]) ;
    }
    }
};