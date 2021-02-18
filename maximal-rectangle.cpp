class Solution {
public:
     int solve(int arr[]){
       stack <int>s;
         int a=0,b=0,tp=0;
         for(int i = 0 ; i< arr.size(); i++){
             if(s.empty()||arr[s.top]<=arr[i])
                 s.push[i];
             else{
                 tp=s.top();
                 s.pop();
                 b=arr[tp]*(s.empty():i? i-s.top()-1);
                 a=max(a,b);
             }
                 
         }
         return b;
     }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
       int t[m+1][n+1];
        for(int i = 0 ; i <= m ; i++ ){
            for(int j = 0 ; j <=n ; j++){
                     if(i==0)
                         t[i][j]=matrix[i][j];
                if(matrix[i][j]==1)
                    t[i][j]+= t[i-1][j]; 
            }
            area = max(area,solve(t[i]));
        }
        return area;
    }
    
    
};
