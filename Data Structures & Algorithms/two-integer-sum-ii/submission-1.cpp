class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = 0;
        int left = numbers.size()-1;
        for(int i = 0;i<numbers.size();i++){
            int sum = numbers[right] + numbers[left];
            if(sum == target){
                return {right+1,left+1};
            }else if (sum < target){
                right++;
            }else{
                left--;
            }
        }
        return {};
    }
};
