class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> sta;
        
        for(char ch : s) {
            
            if( ch == '(' || ch == '{' || ch == '[' ) {
                
                sta.push(ch);
                
            } else {
                if(sta.empty()) return false;
        
            char top = sta.top(); 
            sta.pop();
            
            if( ( ch == ')' && top != '(') || 
                ( ch == '}' && top != '{') ||
                ( ch == ']' && top != '[') ) {
                return false;
            }
          }
        }
        return sta.empty();
    }
};