class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1, max = 0;
        while(left < right){
            int top = 0;
            if(heights[left] < heights[right]){
                top = heights[left] * (right - left);
                if(top > max)
                    max = top;
                left++;
            }else{
                top = heights[right] * (right - left);
                if(top > max)
                    max = top;
                right--;
            }
        }
        return max;
    }
};
