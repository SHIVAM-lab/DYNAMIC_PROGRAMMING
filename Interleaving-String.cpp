class Solution {
public:
    int solve(string a, string b){
        int m = a.length(), n = b.length();
            int t[m+1][n+1];
        for(int i = 0; i < m+1 ; i++){
            for(int j = 0; j < n+1; j++){
                if(i==0 || j==0)
                    t[i][j]=0;
                  if(a[i-1]==b[j-1])
                      t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);

            }
        }
         return t[m][n];
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
        
        int x = solve(s1,s3) , y = solve(s2,s3);
        if(x == s1.length() && y == s2.length()){
            if(x+y==s3.length())
            return true;
        }
             return false;
        
    }
};
