class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
        });
        while(left < right){
            while(left < right && !std::isalnum((unsigned char)s[left]))
                left++;
            while(left < right && !std::isalnum((unsigned char) s[right]))
                right--;
            if(s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
