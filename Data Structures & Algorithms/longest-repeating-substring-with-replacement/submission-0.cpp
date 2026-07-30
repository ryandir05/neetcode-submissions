class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int windowLen = 0;
        int left = 0, maxFreq = 0;
        for(int i = 0; i<s.length();i++){
            freq[s[i]]++;
            maxFreq = max(maxFreq, freq[s[i]]);

            while((i - left +1) - maxFreq > k){
                freq[s[left]]--;
                left++;
            }
            windowLen = max(windowLen, i-left + 1);
        }
        return windowLen;
    }
};
