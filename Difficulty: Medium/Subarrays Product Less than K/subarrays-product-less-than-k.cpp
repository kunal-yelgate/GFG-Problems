class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        // code here
        if (k <= 1) return 0;
        
        int left = 0;
        int right = 0;
        int count = 0;
        int prod = 1;
        
        for(int right = 0; right < arr.size() ; right++) {
            prod *= arr[right];
            
            while(prod >=k) {
                prod /= arr[left];
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
};