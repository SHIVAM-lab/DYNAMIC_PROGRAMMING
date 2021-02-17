class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int t[m][n];
        for(int i =0 ; i < m ; i++){
          for(int j = 0; j < n ; j++){
              if(obstacleGrid[i][j]== 1)
                  t[i][j]=0;
              else{
           if(i == 0 || j == 0)
               t[i][j]=1;
              else
                  t[i][j]=t[i-1][j]+t[i][j-1];
              }
          }
        
        }

       
      return t[m-1][n-1];
        
    }
};
