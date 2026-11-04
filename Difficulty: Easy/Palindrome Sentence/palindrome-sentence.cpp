class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int left = 0 , right = s.size() - 1;
        
        while(left < right) {
            
            if(!isalnum(s[left])) {
                left++;
            } else if(!isalnum(s[right])) {
                right--;
            } else {
                
                if(tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        
        return true;
    }
};