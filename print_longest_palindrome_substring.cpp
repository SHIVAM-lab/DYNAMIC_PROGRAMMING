class Solution {
public:
  
    string longestPalindrome(string s) {
          int t[s.length()][s.length()];
        string b = s.reverse();
        int mx = 0;
        for(int i=0; i < s.length()+1; i++){
            for(int j = 0 ; j < s.length()+1; j++){
                if(i==0 || j ==0)
                    t[i][j]=0;
                if(a[i-1]==b[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    mx = max(mx, t[i][j]);
                }
                else
                    t[i][j]= max(t[i-1][j],t[i][j-1]);
            }
        }
        
    }
    queue<int>q;
    int i=s.length();
    int j=length();
    while(i>0 || j>0){
        if(a[i-1]==b[j-1]){
        q.push(a[i-1]);
            elseif(t[i-1][j]> t[i][j-1])
                i--;
              else
                  j--;
            
    }
    }
     while(!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
    
};