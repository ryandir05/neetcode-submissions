class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1){
            if(nums[0] == target)
                return 0;
            return -1;
        }
        int mid = nums.size()/2 - 1;
        //Serach 2nd half of array
        if(nums[mid] < target){
            for(int i = mid;i<nums.size();i++){
                if(nums[i] == target)
                    return i;
                
            }
        }else{
            for(int i = 0; i<nums.size()/2;i++){
                if(nums[i] == target)
                    return i;
            }
        }
        return -1;
    }
};
