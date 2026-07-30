class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;
        int profit = 0;
        while(right < prices.size()){
            if(prices[left] > prices[right]){
                left = right;
                right++;
            }else{
                int temp = 0;
                temp = prices[right] - prices[left];
                if(temp > profit)
                    profit = temp;
                right++;
            }
                
        }
        return profit;
    }
};
