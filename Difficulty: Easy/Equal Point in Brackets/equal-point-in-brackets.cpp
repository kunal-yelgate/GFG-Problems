class Solution {
  public:
    int findIndex(string &s) {
        
        int totalclose = 0;
        
        for(char bra : s){
            if(bra == ')')  totalclose++;
        }
        
        int openbr = 0;
        int count = 0;
        int closebr = totalclose;
        
        if(openbr == closebr)
            return 0;
        
        for(int i = 0; i < s.size() ; i++) {
            if(s[i] == '(')
               openbr++;
            else
               closebr--;
               
            if(openbr == closebr){
                return i + 1;
            }
        }
        return s.size();
    }
};