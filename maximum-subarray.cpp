class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       if(nums.size() == 1)
           return nums[0];
        else{
        int a = nums[0], b = nums[0];
        for(int i = 0; i < nums.size(); i++){
          b = b + nums[i];
            if(b < 0)
                b = 0;
            else if(a < b && b!=0)
                a = b;
        
        }
        return a ;
        }
        
        
    }
};