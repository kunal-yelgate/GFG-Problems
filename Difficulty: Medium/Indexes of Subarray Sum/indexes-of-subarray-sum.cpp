class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
       int start = 0;
       long long sum = 0;
       
       for(int end  = 0 ; end < arr.size() ; end++){
           sum += arr[end];
           
           while(sum > target) {
               sum -= arr[start];
               start++;
           }
           
           if(sum == target) {
               return {start + 1,end + 1};
           }
       }
       return {-1};
    }
};
 