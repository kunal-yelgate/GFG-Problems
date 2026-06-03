class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size() + 1;
        
        long long expected = n * ( n + 1 ) / 2;
        long long actual = 0;
        
        for(int x : arr) {
            actual += x;
        }
       return (int)(expected - actual);
        
    }
};