class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int left = 0, len = 0;
        for(int i = 0;i<s.length();i++){
            if(hash.find(s[i]) != hash.end()){
                left = max(hash[s[i]] + 1, left);
            }
            hash[s[i]] = i;
            len = max(len, i-left +1);
        }    
        return len;
    }
};
