class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <char,int> freq1;
        for(char c : s1){
            freq1[c]++;
        }

        int count = freq1.size();
        for(int i = 0;i<s2.length();i++){
            unordered_map<char,int> freq2;
            int cur = 0;
            for(int j = i; j<s2.length();j++){
                char c = s2[j];
                freq2[c]++;
                
                if(freq1[c] < freq2[c])
                    break;

                if(freq1[c] == freq2[c])
                    cur++;

                if(cur == count)
                    return true;
            }
        }
        return false;
        
    }
};
