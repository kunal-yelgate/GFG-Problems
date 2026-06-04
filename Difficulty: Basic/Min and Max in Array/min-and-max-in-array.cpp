class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        int small = arr[0];
        int big = arr[0];
        
        for(int x:arr) {
         small = min(small, x);
         big = max(big, x);
        }
        return {small,big};
    }
};