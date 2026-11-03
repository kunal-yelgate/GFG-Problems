class Solution {
  public:
    int countDigits(int n) {
      
      if( n == 0 ) return 1;
      
      
      if( n < 0 ) n = -n;
      
      int cnt;
      while( n > 0) {
           cnt++;
           n = n / 10;
      }
      return cnt;
    }
};