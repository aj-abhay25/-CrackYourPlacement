class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int ans = 0;
        int start = prices[0], end = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] > end){
                end = prices[i];
            }else{
                ans += (end - start);
                start = prices[i];
                end = prices[i];
            }
        }
        if(end > start) ans += (end - start);
        return ans;
    }
};