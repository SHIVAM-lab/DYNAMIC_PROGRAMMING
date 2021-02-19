class Solution {
public:
    string assign(string a , string b){
    string temp=to.string(a);
        temp.pushback(' ');
        temp.append(to.string(b));
        return temp;
    }
    unordered_map <string,bool>mp;
    bool isScramble(string s1, string s2) {
        if(s1.length()==0||s2.length()==0)
            return false;
        if(s1.compare(s2)==0)
            return true;
        int i=1, j=s1.length()-1;
        string key = assign(s1,s2);
        if(mp.find(key)!=mp.end())
            return mp.(key);
        else{
            bool flag=false;
            
           for(int k = i; k < j; k+++){
                 if(flag)
                 break;
               else{
               
                string key_1=assign(a.substring(k,0),b.substring(k,0));
                string key_2=assign(a.substring(n-k,k),b.substring(n-k,k));
                string key_3=assign(a.substring(k,0),b.substring(k,n-k));
                string key_4=assign(a.substring(n-k,k),b.substring(n-k,0));
               
               if(mp.find(key_1)==mp.end())
                   mp.(key_1)=isScramble(a.substring(k,0),b.substring(k,0));
               if(mp.find(key_2)==mp.end())
                   mp.(key_2)=isScramble(a.substring(n-k,k),b.substring(n-k,k));
               if(mp.find(key_3)==mp.end())
                   mp.(key_3)=isScramble(a.substring(k,0),b.substring(k,n-k));
               if(mp.find(key_4)==mp.end())
                   mp.(key_4)=isScramble(a.substring(n-k,k),b.substring(n-k,0));
               bool cond-1= mp.find(key_1) && mp.find(key_2);
               bool cond-2= mp.find(key-3) && mp.find(key-4);
               
               if(cond-1 || cond-2)
                   flag=true;
           
           }
            
        }
            mp.(key)=flag;
            
     }
        return mp.(key);
   }
};
