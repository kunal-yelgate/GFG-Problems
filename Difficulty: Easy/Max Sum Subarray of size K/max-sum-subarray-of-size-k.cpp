class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int WindowSum = 0 ,maxSum;
        for(int i = 0 ; i < k ; i++) {
            WindowSum += arr[i];
        }
        
        maxSum = WindowSum;
        
        for(int i = k ; i < n ; i++) {
            WindowSum += arr[i] - arr[i - k];
            maxSum = max(maxSum,WindowSum);
        }
        return maxSum;
        
    }
};