class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> soln;
        vector<int> sub;
        dfs(nums,0,sub,soln);
        return soln;
    }
private: 
    void dfs(const vector<int>& nums, int i, vector<int>&sub,vector<vector<int>>& soln){
        if(i >= nums.size()){
            soln.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        dfs(nums, i + 1, sub, soln);
        sub.pop_back();
        dfs(nums, i + 1, sub, soln);
    }
};
