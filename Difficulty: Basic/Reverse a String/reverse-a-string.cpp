class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int l= 0 , r = s.length() - 1;
        
        while( l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
      return s;
    }
};
