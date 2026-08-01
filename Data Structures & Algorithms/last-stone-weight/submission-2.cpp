class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(), stones.end());

        while(maxHeap.size() > 1){
            int stone = maxHeap.top();\
            maxHeap.pop();
            if(stone == maxHeap.top()){
                maxHeap.pop();
            }else{
                if(stone < maxHeap.top()){
                    int temp = maxHeap.top();
                    maxHeap.pop();
                    stone = temp - stone;
                    maxHeap.push(stone);
                }else{
                    int temp = maxHeap.top();
                    maxHeap.pop();
                    stone = stone - temp;
                    maxHeap.push(stone);
                }
            }

        }
        if(!maxHeap.empty())
            return maxHeap.top();
        return 0;
    }
};
