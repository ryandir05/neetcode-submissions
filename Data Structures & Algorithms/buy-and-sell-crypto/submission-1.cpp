class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, profit = 0;
        while(right < prices.size()){
            if(prices[left] > prices[right]){
                left = right;
            }
            if(prices[right] - prices[left] > profit){
                profit = prices[right] - prices[left];
                right++;
            }else{
                right++;
            }
                   
        }
        return profit;

    }
};
