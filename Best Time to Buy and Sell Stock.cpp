class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
         int p = prices[prices.size()-1], q=0, temp=0;
        for(int j = prices.size()-2; j >= 0; j--){
            p = max(prices[j+1],p);
            q= p-prices[j];
            temp = max(temp,q);
        }
        return temp;
    }
   
};
