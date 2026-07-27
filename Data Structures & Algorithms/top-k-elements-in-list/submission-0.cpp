class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        for(int num : nums) {
            freq[num]++;
        }
        vector<int> unique;
        for(auto& [num,count] : freq) {
            unique.push_back(num);
        }
        quickselect(unique, 0, unique.size()-1, unique.size()-k, freq);
        vector<int> soln;
        for(int i = unique.size()-k; i < unique.size(); i++) {
            soln.push_back(unique[i]);
        }
        return soln;
    }
private:
    void quickselect(vector<int>& nums, int left, int right, int target,
                     unordered_map<int,int>& freq) {
        if(left >= right)
            return;

        int pivot = partition(nums, left, right, freq);

        if(pivot == target) {
            return;
        }
        else if(pivot < target) {
            quickselect(nums, pivot+1, right, target, freq);
        }
        else {
            quickselect(nums, left, pivot-1, target, freq);
        }
    }
    int partition(vector<int>& nums, int left, int right,
                  unordered_map<int,int>& freq) {
        int pivotFreq = freq[nums[right]];
        int store = left;

        for(int i = left; i < right; i++) {
            if(freq[nums[i]] < pivotFreq) {
                swap(nums[i], nums[store]);
                store++;
            }
        }
        swap(nums[store], nums[right]);
        return store;
    }
};