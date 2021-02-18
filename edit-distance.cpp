class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        int t[m+1][n+1];
        for(int i = 0; i <=m ; i++){
             for(int j = 0 ; j <= n; j++){
                  if(i==0 || j==0)
                      t[i][j]=0;
                else if(word1[i]==word2[j])
                     t[i][j]=1+t[i-1][j-1];
                 else
                     t[i][j]=max(t[i-1][j],t[i][j-1]);
             }
        }
        int a = m-t[m][n], b = n - t[m][n];
        int c = min(a,b);
        int insertion=0, deletion=0;
        if(a>c)
            deletion=a-c;
        if(b>c)
            insertion = b-c;
        return c + insertion + deletion;
    }
};
